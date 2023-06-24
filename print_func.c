#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _printf - prints to stdout
 * @format: the string to be printed
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char d;
	int count = 0;
	char *str;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
				{
					d = va_arg(args, int);
					count += write(1, &d, 1);
					format += 2;
					break;
				}
				case 's':
				{
					str = va_arg(args, char *);
					count += write(1, str, _strlen(str));
					format += 2;
					break;
				}
				case '%':
				{
					count += write(1, &(*format), 1);
					format += 2;
					break;
				}
			}
		}
		else
		{
			count += write(1, &(*format), 1);
			format++;
		}
	}
	va_end(args);
	return (count);
}
