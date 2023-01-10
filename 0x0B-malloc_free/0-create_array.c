#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array
 * @size: size of the memory
 * @c: character
 * Return:char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);
	p = malloc((size) * sizeof(char));
	if (p == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
	}
