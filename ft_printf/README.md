# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clalfons <clalfons@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/16 02:38:48 by clalfons          #+#    #+#              #
#    Updated: 2025/12/16 15:12:59 by clalfons         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

This project has been created as part of the 42 curriculum by clalfons.


***DESCRIPTION***

**ft_printf** is an original reimplementation of the C standard library function
`printf()`. The purpose of this project is to understand how formatted output 
works in C, with a focus on **variadic functions**, format parsing, and clean 
code structure. 

The resulting function can later be integrated into our `libft` to be reused 
in future projects.


***INSTRUCTIONS***

The implementation is based on a linear format string parser combined with
modular handler functions for each specifier, ensuring simplicity, readability,
and easy extensibility.

**Prototype:**

```c
int ft_printf(const char *format, ...);
```

### **Usage**

## Implementation Overview

The format string is parsed character by character. When a `%` is found, the
next character determines the conversion type. Variadic arguments are handled
using `stdarg.h`, and each specifier is managed by a dedicated function to keep
the code modular and easy to extend.

All output is written using the `write` system call, as required.

The mandatory part supports the following conversions:

* `%c` character
* `%s` string
* `%p` pointer (hexadecimal)
* `%d` / `%i` signed decimal integer
* `%u` unsigned decimal integer
* `%x` / `%X` hexadecimal (lowercase / uppercase)
* `%%` percent sign


***RESOURCES***

Additional resources and information can be found at:

- man printf
- man stdarg