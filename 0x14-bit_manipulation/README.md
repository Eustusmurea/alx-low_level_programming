Bit manipulation

This project is aimed at developing a C program that adheres to certain guidelines and requirements. The program will be compiled on Ubuntu 20.04 LTS using gcc with specific options. The code should follow the Betty style, and there are restrictions on the use of global variables and standard library functions. The program should also include a `README.md` file at the root of the project folder.

## Requirements

- Editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS, gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- File Format: All files should end with a new line
- Coding Style: Follow the Betty style, checked using betty-style.pl and betty-doc.pl
- Functions: Each file should have no more than 5 functions
- Standard Library: Only the functions malloc, free, and exit are allowed. Functions like printf, puts, calloc, realloc, etc., are forbidden.
- Custom Function: _putchar is allowed
- Excluded File: _putchar.c should not be pushed to the repository

## Usage

To compile and run the program, follow these steps:

1. Clone the repository.
2. Navigate to the project directory.
3. Compile the files using the following command:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
   ```

4. Run the program:

   ```bash
   ./output
   ```

Please note that the provided `main.c` file is only for testing purposes and should not be pushed to the repository. The compilation process will use its own `main.c` files, which may differ from the provided examples.



Eustus Mwirigi @Eustusmurea2023