#include "main.h"
#include <stdio.h>

int main(void)
{
	int len = _printf("%%c\n", 'd');
	int len2 = printf("%%c\n", 'd');

	printf("%d %d\n", len, len2);
	printf(NULL);
	printf("I am a %s", NULL);
	return (0);
}
