*This project was created as part of the 42 curriculum by <login>*

# ft_printf

## Description

**ft_printf** is a custom reimplementation of the C standard library function `printf()`. The purpose of this project is to understand how formatted output works in C, with a focus on **variadic functions**, format parsing, and clean code structure. The resulting function can later be integrated into `libft` and reused in future projects.

## Features

The mandatory part supports the following conversions:

* `%c` character
* `%s` string
* `%p` pointer (hexadecimal)
* `%d` / `%i` signed decimal integer
* `%u` unsigned decimal integer
* `%x` / `%X` hexadecimal (lowercase / uppercase)
* `%%` percent sign

Prototype:

```c
int ft_printf(const char *format, ...);
```

## Instructions

### Compilation

The project builds a static library called `libftprintf.a`.

```bash
make
```

Makefile rules available: `all`, `clean`, `fclean`, `re`.

The project is compiled with:

```bash
-Wall -Wextra -Werror
```

### Usage

```c
#include "ft_printf.h"

ft_printf("Hello %s (%d)\n", "42", 2024);
```

## Implementation Overview

The format string is parsed character by character. When a `%` is found, the next character determines the conversion type. Variadic arguments are handled using `stdarg.h`, and each specifier is managed by a dedicated function to keep the code modular and easy to extend.

All output is written using the `write` system call, as required.

## Bonus

The bonus part extends the function with flag management (`-`, `0`, `.`, field width, `#`, `+`, space`) and is implemented in separate bonus files, compiled with `make bonus`.

## Resources

* `man printf`
* `man stdarg`
* *The C Programming Language* — Kernighan & Ritchie

### Use of Artificial Intelligence

AI tools were used only to support understanding of concepts such as variadic functions and format specifiers. No AI-generated code was copied into this project.

