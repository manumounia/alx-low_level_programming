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

        while (num <= '9')
{
        putchar(num);
	putchar(',');
	putchar(' ');
        num++;
}
        putchar('\n');
        return (0);
}
