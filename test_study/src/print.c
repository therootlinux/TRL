#include <stdint.h>
#include <stddef.h>
#include "font8x8.h"
#include "limine.h"

extern struct limine_framebuffer_request framebuffer_request;

void draw_char(char c, size_t x, size_t y, uint32_t color) {
    struct limine_framebuffer *fb = framebuffer_request.response->framebuffers[0];

    if (c < 0 || c > 127 || fb->address == NULL) return;

    const uint8_t *glyph = font8x8_basic[(int)c];

    for (size_t row = 0; row < 8; row++) {
        for (size_t col = 0; col < 8; col++) {
            if ((glyph[row] >> (7 - col)) & 1) {
                size_t px = x + col;
                size_t py = y + row;
                uint32_t *fb_ptr = fb->address;
                fb_ptr[py * (fb->pitch / 4) + px] = color;
            }
        }
    }
}


void print(const char *str, size_t x, size_t y, uint32_t color) {
    while (*str) {
        draw_char(*str, x, y, color);
        x += 8;
        str++;
    }
}
