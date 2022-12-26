#include "main.h"
/**
 * _strlen - length of a string
 * @s: string that should be measure
 *
 * Return: return length of s
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(counter + s) != '\0')
	{
		counter++;
	}
	return (counter);
}
