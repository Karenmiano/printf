#include "main.h"
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
