#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
* struct dict - struct for printer functions
* @pages: specifics
* @print: points to a printer functions
* Description: struct that stores pointers to a
* printer functions.
*/
typedef struct dict
{
char *pages;
int (*print)(va_list, char *, unsigned int);
} dict_type;
int print_b_binary(va_list args, char *buffer, unsigned int buffer_i);
int print_i(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int print_modulo(void);
int print_c_char(va_list args);
int print_s_string(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int print_rot13(va_list args, char *buffer, unsigned int buf_i);
#endif
