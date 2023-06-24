#include "main.h"
#include <stdio.h>

int main()
{
	_printf("%%s\n", "cat");
	printf("%%s\n%%c", "cat", 'd');
	return (0);
}
