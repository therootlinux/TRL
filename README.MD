i# TRLOS

![License](https://img.shields.io/badge/license-GPLv2-blue.svg)

TRLOS is a clean-room reimplementation of the Linux kernel, written from scratch, and licensed under the GNU General Public License v2 (GPL-2.0-only). It is the foundation for a new operating system built on original kernel code, informed by the design of Unix-like systems but free from legacy constraints.

## Project Goals

- Provide a modern, modular operating system kernel
- Serve as a learning and research platform for kernel development
- Maintain clean, well-documented code with a focus on clarity and extensibility
- Remain independent of existing Linux code while staying compatible with core concepts

## Key Features (In Progress)

- Custom boot sequence and early kernel initialization
- Original memory management subsystem
- Custom process scheduler and tasking model
- Modular driver interface
- Minimal userland with custom init system
- Designed for x86_64 architecture (initial target)

## Architecture Overview

TRLOS consists of the following key components:

- `boot/` – Architecture-specific bootloader stubs and entry points
- `kernel/` – Core kernel logic, including tasking, memory, and system call handling
- `drivers/` – Hardware interface layer (e.g., keyboard, display, timers)
- `lib/` – Kernel-space support libraries
- `user/` – Initial userland tools and system utilities
- `doc/` – Design specifications, architectural notes, and licensing

## License

TRLOS is licensed under the GNU General Public License version 2 (GPL-2.0-only). See the `LICENSE` file for full details.

## Building

To build TRLOS, you will need:

- GCC (or Clang)
- GNU Make
- QEMU (for testing)
- NASM or a compatible assembler

Build instructions will be provided in `BUILD.md`.

## Contributing

TRLOS is an independent, from-scratch kernel project. Contributions are welcome, provided all code submitted is original work and compatible with the GPLv2 license. Please read `CONTRIBUTING.md` before submitting patches or opening issues.

## Disclaimer

This software is experimental and currently under heavy development. It is not intended for use in production systems.

