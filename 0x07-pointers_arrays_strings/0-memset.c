#include "main.h"
/**
 * _memset - set the the first n values
 * @s: points to string
 * @b: set byte
 * @n: first n numbers
 * Return: memset s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
