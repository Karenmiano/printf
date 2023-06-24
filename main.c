#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;

	len = _printf("GO %s\n", NULL);
	printf("%d\n", len);
	return (0);
}
