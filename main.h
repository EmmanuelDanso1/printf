#ifndef _main_h_
#define _main_h_
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
/**
* struct diction - struct for printer functions
* @specs: specifier
* @print: pointer to a printer functions
*
* Description: struct that stores pointers to a
* printer functions.
*/
typedef struct diction
{
char *specs;
int (*print)(va_list, char *, unsigned int);
} dict_type;
#define BUFF_SIZE 1024
unsigned int handle_buff(char *buffer, char c, unsigned int buffer_i);
int print_rot13(va_list args, char *buffer, unsigned int buffer_i);
int display_buffer(char *buffer, unsigned int bytes);
int print_reverse(va_list args, char *buffer, unsigned int buffer_i);
int print_unsigned_int(va_list args, char *buffer, unsigned int buffer_i);
unsigned int temp, digt, divisor, index;
char *init_bin(char *bin, long int arg, int is_negat, int size);
char *init_hex(char *hexa, char *bin, int size, int uppercase);
char *init_oct(char *oct, char *binary);
int print_address(va_list args, char *buffer, unsigned int buffer_i);
int print_binary(va_list args, char *buffer, unsigned int buffer_i);
#endif
