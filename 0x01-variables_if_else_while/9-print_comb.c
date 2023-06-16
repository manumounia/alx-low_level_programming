#include <stdio.h>
/**
 * main - prints all possible combinations
 * of single-digit numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
        int num = '0';

        do
{
        putchar(num);
	putchar(',');
	putchar(' ');
        num++;
}
	while (num <= '9');
	putchar('\n');
        return (0);
}
