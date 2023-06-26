#define MAIN_H
#ifndef MAIN_H


#include <stdarg.h>
/**
 * struct form - structure that will choose correct function for
 * format to be executed
 * @c: format specifier
 * @ptr: function to execute
 */
typedef struct form
{
	
	int (*ptr)(const char **ptr, va_list args);
} form;
int _printf(const char *format, ...);
int _strlen(char *s);
int do_char(const char **p, va_list cargs);
int do_string(const char **s, va_list sargs);
int do_percent(const char **r, va_list rargs);

#endif
