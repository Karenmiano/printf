#include "main.h"
/**
 * print_number - prints integers no matter the length
 * @n: the integer
 * Return: nothing
 */
int print_number(int n)
{
	int d = 10, divider = 1, num_digits = 1, count = 0;
	unsigned int temp, temp2;

	if (n < 0)
	{
		count += _putchar('-');
		temp = (unsigned int)(-n);
	}
	else
		temp = (unsigned int) n;
	temp2 = temp;
	while (temp2 / d)
	{
		num_digits++;
		temp2 /= d;
	}
	count += num_digits;
	while (num_digits > 1)
	{
		divider *= d;
		num_digits--;
	}
	while (divider)
	{
		_putchar('0' + (temp / divider));
		temp %= divider;
		divider /= d;
	}
	return (count);
}
/**
 * no_percent - handles case where % is followed by '\0'
 * @ptr: pointer to pointer
 * @targs: holds optional arguments
 * Return: 0 as nothing is printed
 */
int no_percent(const char **ptr, va_list targs __attribute__((unused)))
{
	(*ptr) += 1;
	return (0);
}
