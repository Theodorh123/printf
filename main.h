#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
* struct stdout_ - structure for symbol and function
* @sym: The operator
* @pfunc: The function assoiated
*/
typedef struct stdout_
{
	char sym;
	int (*pfunc)(va_list *);
} stdout_t;

int _putchar(char c);
stdout_t select_printer(char s);
int _printf(const char *format, ...);


#endif /* MAIN_H */
