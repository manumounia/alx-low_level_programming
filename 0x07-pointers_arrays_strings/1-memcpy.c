#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i =0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
