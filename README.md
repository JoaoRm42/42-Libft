# 42 Libft Project

Welcome to the 42 Libft Project repository! This project is part of the 42 curriculum, and its goal is to recreate some of the standard C library functions, as well as other utility functions that will be useful throughout the 42 program.

## Table of Contents
- [Introduction](#introduction)
- [Project Objectives](#project-objectives)
- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [Acknowledgments](#acknowledgments)

## Introduction

Libft is a foundational project at 42 that helps students understand the inner workings of standard library functions by implementing them from scratch. The library will provide a deeper understanding of data structures and algorithms that are fundamental to C programming.

## Project Objectives

- Reimplement standard C library functions.
- Implement additional utility functions.
- Develop a robust understanding of C programming.
- Create a library that will be useful for future 42 projects.

## Requirements

- A Unix-based operating system (Linux or macOS).
- GCC compiler.
- Basic understanding of C programming.

## Project Structure

Here's a brief overview of the project structure:

```
.
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_memccpy.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
├── Makefile
└── README.md
```

## Installation

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/joaoped2-42PORTO/42-Libft.git
    cd 42-libft
    ```

2. **Compile the Library**:
    ```bash
    make
    ```

    This will create a `libft.a` file in the root directory.

## Usage

To use the `libft` library in your own projects, include the `libft.h` header file and link the `libft.a` library during compilation.

1. **Include the Header**:
    ```c
    #include "libft.h"
    ```

2. **Link the Library**:
    ```bash
    gcc -o myprogram myprogram.c -L. -lft
    ```

## Contributing

Contributions are welcome! If you have any suggestions or improvements, feel free to create an issue or submit a pull request. Please ensure that your contributions adhere to the coding standards and guidelines of the project.


## Acknowledgments

- The 42 Network for providing the inspiration and resources for this project.
- The C programming community for their excellent documentation and support.
- All contributors who have helped improve this project.

---

Happy coding!
