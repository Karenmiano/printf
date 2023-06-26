#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct form - structure that will choose correct function for
 * format to be executed
 * @c: format specifier
 * @ptr: function to execute
 */
typedef struct form
{
	char c;
	int (*ptr)(const char **ptr, va_list args);
} form;
int _printf(const char *format, ...);
int _strlen(char *s);
int do_char(const char **p, va_list cargs);
int do_string(const char **s, va_list sargs);
int do_percent(const char **r, va_list rargs);
int do_decimal(const char **d, va_list dargs);
int print_number(int n);
int _putchar(char c);

#endif
