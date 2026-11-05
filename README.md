*This project has been created as part of the 42 curriculum by marvin.*

# Libft

## Description
Libft is the very first project of the 42/1337 core curriculum. The goal of this project is to recreate various standard C library (`libc`) functions, as well as additional utility functions, from scratch. By writing these functions, students gain a deep understanding of data structures, memory allocation, pointer manipulation, and string operations. 

This project requires strict adherence to the Norminette coding standard (e.g., maximum 25 lines per function) and emphasizes robust memory management to ensure absolutely no memory leaks occur. The final output is a static library (`libft.a`) that will be used as a foundational tool in almost all future C projects in the curriculum.

## Library Description
The library is divided into several parts, providing a robust toolkit for string and memory manipulation:

**Part 1: Libc Functions**
Re-implementations of standard C library functions.
*   **Memory manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
*   **String inspection & manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
*   **Character classification:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
*   **Character conversion:** `ft_toupper`, `ft_tolower`, `ft_atoi`

**Part 2: Additional Functions**
Utility functions not found in the standard `libc`, heavily used in 42 projects.
*   **String creation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
*   **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

*(Note: If you have implemented the Bonus part with linked lists, you can add a "Bonus: Linked List Functions" section here).*

## Instructions

### Compilation
To compile the library, clone the repository and run `make` at the root of the project. This will compile all `.c` files and generate the static library archive `libft.a`.

Available Makefile rules:
*   `make` or `make all`: Compiles the library.
*   `make clean`: Removes object (`.o`) files.
*   `make fclean`: Removes object files and the `libft.a` binary.
*   `make re`: Runs `fclean` followed by `make`.

### Execution / Integration
To use this library in your own C projects:
1. Include the header file in your C source files:
   ```c
   #include "libft.h"
   ```
2. Compile your program with the compiled library:
   ```bash
   cc -Wall -Wextra -Werror my_program.c -L. -lft -o my_program
   ```

## Resources

*   **Documentation:** 
    *   Linux Programmer's Manual (`man 3` pages for functions like `malloc`, `free`, `string`, etc.).
*   **AI Usage:** 
    *   AI (Large Language Model) was used during this project strictly as a coding coach and debugger. 
    *   **Tasks:** It was used to analyze conceptual logic for complex functions (specifically `ft_split`), identify edge cases (like consecutive and trailing delimiters), and pinpoint memory leaks (such as failing allocations in 2D arrays).