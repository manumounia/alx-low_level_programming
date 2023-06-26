#include "main.h"
/**
 * puts_half - prints a of a string, followed by a new line
 * @str: string to print
 */
void _puts(char *str)
{
	char n;
	int len = 0;
	
	len = strlen(*str);
	while (*str != '\0')
{
	n = (len - 1) / 2
	_putchar(n);
}
	_putchar('\n');
}
