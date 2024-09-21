# LibMX - C Utility Library
LibMX is a lightweight utility library written in C that provides a set of useful functions for memory management, string manipulation, list handling, and more. The library is designed to be efficient and cross-platform, supporting Linux and macOS.


------------

## Features
- **Memory Management**: Includes functions such as mx_memset, mx_memcpy, and mx_realloc.
- **String Manipulation**: Functions like mx_strlen, mx_strcat, and mx_strtrim for working with C strings.
- **Unicode Support**: Printing and handling Unicode characters with mx_print_unicode.
- **Sorting Algorithms**: Implements both bubble sort and quicksort algorithms.
- **Linked Lists**: Functions for managing singly linked lists, such as adding/removing elements and sorting.

------------

## Installation
To use LibMX in your project, follow these steps:

1. Clone this repository:
```bash
git clone https://github.com/Corkerro/libmx
cd libmx
```
2. Build the library:
```bash
make
```
This will compile the source files and create the static library `libmx.a` in the project directory.

------------

## Usage
To include LibMX in your C project:
1. Include the relevant headers from the `inc` directory in your source files:
```c
#include "libmx.h"
```
2. Link the library during compilation:
```bash
clang -o your_program your_program.c -L. -lmx
```

------------

## Project Structure
    libmx/
    ├── inc/                 # Header files
    │   └── libmx.h      # Main library header
    ├── obj/                # Directory for object files (created during compilation)
    ├── src/                 # Source code for the library
    │   └── *.c              # C files for various utility functions
    ├── Makefile          # Build instructions
    └── README.md   # Project documentation


------------

## Makefile
The `Makefile` provided in this project automates the process of building the static library `libmx.a` from the source files in the `src` directory.
- **Variables**
- `CC`: The compiler used (Clang).
- `CFLAGS`: Compilation flags for warnings and standard settings.
- `OBJ_DIR`: Directory for storing object files.
- `LIB_NAME`: Name of the generated static library (libmx.a).
- **Targets**
- `all`: The default target that compiles the source files and creates libmx.a.
- `clean`: Removes all object files and the compiled library.
  To clean the project directory, run:
```bash
make clean
```

------------

## License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/Corkerro/libmx/blob/main/LICENSE "LICENSE") file for details.

