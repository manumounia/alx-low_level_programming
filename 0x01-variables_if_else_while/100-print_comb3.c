#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main() {
    int i, j;

    for (i = 0; i <= 8; i++) {
        for (j = i + 1; j <= 9; j++) {
            putchar('0' + i);
            putchar('0' + j);
            
            if (i != 8 || j != 9) {
                putchar(',');
                putchar(' ');
            }

            if (j == 9) {
                i++;
                j = i;
            }
        }
    }

    return 0;
}

