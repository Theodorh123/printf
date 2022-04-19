#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 *struct print - structure for different types of cases
 * struct print - is the struct for printer functions
 * @f: is the pointer to a printer functions
 * @oper: is the identifier
 *
 * Description: struct stores pointers to the
 * printer functions.
 */
typedef struct print
{
	char *oper;
	int (*f)(va_list y);
} print_t;

/* General Prototypes */

int _printf(const char *format, ...);
int print_func(int *i, const char *format, va_list arguments);

/* Putchar */
int _putchar(char c);

/* Main Prototypes*/

int oper_char(va_list y);
int oper_string(va_list y);
int oper_percent(va_list y);
int oper_numbers(va_list arg);

#endif
