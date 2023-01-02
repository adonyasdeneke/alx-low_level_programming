#include "main.h"
/**
 * _memcpy - copy
 * @dest: pointer to be changed
 * @src: pointer to changer
 * @n: number
 * Return: On success one
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
