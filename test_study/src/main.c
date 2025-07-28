#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <limin.h>
#include "limine.h"
#include "util.h"

#include "print.h"

void kmain(void) {
    if (LIMINE_BASE_REVISION_SUPPORTED == false) {
        hcf();
    }

    if (framebuffer_request.response == NULL
     || framebuffer_request.response->framebuffer_count < 1) {
        hcf();
    }

    struct limine_framebuffer *framebuffer = framebuffer_request.response->framebuffers[0];

    // Clear screen (optional)
    for (size_t y = 0; y < framebuffer->height; y++) {
        for (size_t x = 0; x < framebuffer->width; x++) {
            ((uint32_t *)framebuffer->address)[y * (framebuffer->pitch / 4) + x] = 0x000000;
        }
    }

    // Print "Hello" in white at (10, 10)
    print("HELLO", 10, 10, 0xffffff);

    hcf();
}
