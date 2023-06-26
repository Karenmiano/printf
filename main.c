#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf("%s %c", "This sentence is retrieved from va_args!", 'r');
	len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%d %d\n", len, len2);
	_printf("%d %i\n", 1000, 98);
	printf("%d %i\n", 1000, 98);
	return (0);
}
