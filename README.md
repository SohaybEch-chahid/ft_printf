*This project has been created as part of the 42 curriculum by sech-cha.*

# Description

**ft_printf** is a project from the 42 curriculum that aims to recreate the behavior of the standard C library function `printf()`.

The goal is to understand how formatted output works in C, including variadic functions, format specifiers, argument handling, and output formatting.

The project consists of implementing a custom `ft_printf()` function capable of parsing a format string and printing different types of data according to the specified conversion characters.

Supported conversions include:

- `%c` : Print a single character.
- `%s` : Print a string.
- `%p` : Print a pointer address in hexadecimal format.
- `%d` : Print a signed decimal integer.
- `%i` : Print a signed integer.
- `%u` : Print an unsigned decimal integer.
- `%x` : Print an unsigned integer in lowercase hexadecimal.
- `%X` : Print an unsigned integer in uppercase hexadecimal.
- `%%` : Print a literal percent sign.

# Instructions

## Compilation

To compile the library, run:

```bash
make
```

This generates the static library `libftprintf.a`.

## Cleaning

Remove object files:

```bash
make clean
```

Remove object files and the compiled library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

## Usage

Include the header file in your C source file:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lftprintf -o program
```

Run the executable:

```bash
./program
```

# Algorithm and Data Structures

## Algorithm

The implementation uses a sequential format-string parsing algorithm.

The `ft_printf()` function iterates through the format string character by character.

1. **Format String Traversal:** Ordinary characters are printed directly.
2. **Conversion Detection:** When a `%` character is encountered, the following character is examined to identify the requested conversion.
3. **Argument Retrieval:** The corresponding argument is retrieved using variadic functions (`va_arg`).
4. **Conversion Handling:** A dedicated function handles each conversion specifier and prints the corresponding representation.
5. **Character Counting:** Each output function returns the number of characters successfully written. These values are accumulated to calculate the total number of characters printed.

The algorithm continues until the end of the format string is reached.

## Data Structures

The implementation primarily uses:

- **Format String (`const char *`):** Stores the sequence of characters and conversion specifiers to be processed.
- **Variadic Argument List (`va_list`):** Provides access to the additional arguments passed to `ft_printf()`.
- **Character Set Strings:** Used as lookup tables for hexadecimal conversion, such as `"0123456789abcdef"` and `"0123456789ABCDEF"`.
- **Integer Variables:** Used to track the number of characters printed and manage conversion results.

## Algorithm Justification

A sequential parsing approach was chosen because it is simple, efficient, and closely follows how formatted output functions process format strings.

Using separate functions for each conversion makes the implementation modular, easier to maintain, and easier to test.

The implementation does not require complex data structures because the format string can be processed directly without storing or modifying its contents.

# Resources

## Documentation

- [printf(3) - Linux Manual Page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h - Variadic Functions](https://en.cppreference.com/w/c/variadic)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)

## AI Usage

AI tools were used as learning and assistants during this project.

They were used for:

- Understanding variadic functions and how `va_list`, `va_start`, `va_arg`, and `va_end` work.
- Understanding the behavior of the standard `printf()` function and its conversion specifiers.
- Clarifying concepts related to integer representations, hexadecimal conversions, pointers, and memory.
