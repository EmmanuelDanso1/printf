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
unsigned int hand_buff(char *buffer, char c, unsigned int buf_i)
int print_rot13(va_list args, char *buffer, unsigned int buf_i);
int display_buff(char *buffer, unsigned int bytes)
#endif
