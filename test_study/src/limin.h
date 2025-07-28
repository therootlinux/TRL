#ifndef LIMINE_INIT_H
#define LIMINE_INIT_H

#include <limine.h>
#include <stdint.h>

extern volatile struct limine_framebuffer_request framebuffer_request;
extern volatile uint64_t limine_base_revision[];

#define LIMINE_BASE_REVISION_SUPPORTED (limine_base_revision[2] == 0)

#endif