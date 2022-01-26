# printf

I wrote a library that contains ft_printf, a function that will mimic the real printf.

### Table of Contents
* [Conversions](#conversions)
* [Installation & Usage](#installation&usage)

<a name="conversions"/>

## Conversions

| Format Specifier | Description |
| :---: | :---: |
| `%c` | print a single character. |
| `%s` | print a string of characters. |
| `%p` | The void * pointer argument is printed in hexadecimal. |
| `%d` | print a decimal (base 10) number. |
| `%i` | print an integer in base 10. |
| `%u` | print an unsigned decimal (base 10) number. |
| `%x` | print a number in hexadecimal (base 16), with lowercase. |
| `%X` | print a number in hexadecimal (base 16), with uppercase. |
| `%%` | print a percent sign. |

<a name="installation&usage"/>

## Installation & Usage
To test my library, just clone the repository like this:
```
git clone https://github.com/zangelis/printf.git
cd printf
```
The Makefile compiles all the SRCS files and generates the output file `libftprintf.a`. Here are some of the commandes you can try:
```
make		- compile without bonus functions
make clean	- remove object files
make fclean	- remove object files and binary file (program)
make re		- re-compile
```
