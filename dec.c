#include "main.h"
/**
 * print_number - prints integers no matter the length
 * @n: the integer
 * Return: nothing
 */
int print_number(int n)
{
	int d = 10, divider = 1, num_digits = 1, count;
	unsigned int temp, temp2;

	if (n < 0)
	{
		_putchar('-');
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
	count = num_digits;
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
