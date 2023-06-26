#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	int len = 0;
	int i;
	
	while (*str != '\0')
{
	len++;
	str++;
}
	str--;
	for (i = len;i > 0; i--)
{
	_putchar(*str);
	str--;
}
	_putchar('\n');
}

