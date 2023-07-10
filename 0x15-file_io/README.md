

This is a README.md file for the File i/o project.

## Description

This project is developed using C programming language and follows the Betty style guidelines. It is compiled on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`. The project does not use global variables and restricts the use of C standard library functions. Only `malloc`, `free`, and `exit` functions are allowed.

## Requirements

- Ubuntu 20.04 LTS
- GCC compiler
- Editor: vi, vim, emacs
- Betty style guidelines
- betty-style.pl and betty-doc.pl scripts for style checking

## Getting Started

To get started with the project, follow these instructions:

1. Clone the repository: `git clone <repository_url>`
2. Navigate to the project directory: `cd <project_directory>`

## Compilation

To compile the project, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file_name.c -o output_file
```

Replace `file_name.c` with the name of the C file you want to compile and `output_file` with the desired name for the compiled output file.

## Style Checking

To check the code against the Betty style guidelines, use the following commands:

```bash
betty-style.pl file_name.c
betty-doc.pl file_name.c
```

Replace `file_name.c` with the name of the C file you want to check.

## Usage

Once the project is compiled, you can run the executable using the following command:

```bash
./output_file
```

Replace `output_file` with the name of the compiled output file.

## Author

- [eustus](https://github.com/eustusmurea)

## License


