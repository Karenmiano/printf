#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * do_char - handles %c specifier
 * @cargs: holds character to be printed
 * @p: pointer to pointer
 * Return: 1 as number of character printed
 */
int do_char(const char **p, va_list cargs)
{
	char d = va_arg(cargs, int);

	(*p) += 2;

	return (write(1, &d, 1));
}
/**
 * do_string - handles %s specifier
 * @sargs: holds address of string to be printed
 * @s: pointer to pointer
 * Return: number of characters printed
 */
int do_string(const char **s, va_list sargs)
{
	char *str = va_arg(sargs, char *);

	if (str == NULL)
		str = "(nil)";
	(*s) += 2;

	return (write(1, str, _strlen(str)));
}
/**
 * do_percent - handles %% case
 * @r: pointer to pointer that holds %
 * @rargs: holds optional argument
 * Return: 1 as number of character printed
 */
int do_percent(const char **r, va_list rargs __attribute__((unused)))
{
	write(1, &(**r), 1);
	(*r) += 2;

	return (1);
}
/**
 * do_decimal - handles both %d and %i
 * @d: pointer to pointer
 * @dargs: holds optional argument
 * Return: number of digits in an integer
 */
int do_decimal(const char **d, va_list dargs)
{
	int i = va_arg(dargs, int);

	(*d) += 2;
	return (print_number(i));
}
/**
 * _strlen - finds the length of a string
 * @s: address of the string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
