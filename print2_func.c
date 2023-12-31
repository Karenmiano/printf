#include "main.h"
/**
 * _printf - prints to stdout
 * @format: the string to be printed
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;
	form arr[] = {
		{'c', do_char}, {'s', do_string}, {'d', do_decimal},
		{'i', do_decimal}, {'%', do_percent}, {'\0', no_percent},
		{'b', do_binary}};
	const char **ptr;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			for (i = 0; i < 7; i++)
			{
				if (*(format + 1) == arr[i].c)
				{
					ptr = &format;
					count += arr[i].ptr(ptr, args);
					break;
				}
			}
			if (i == 7)
			{
				count += write(1, &(*format), 1);
				format++;
			}
		}
		else
		{
			count += write(1, &(*format), 1);
			format++;
		}
	}
	return (count);
}
