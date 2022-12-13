#include "main.h"
/**
 * _isalpha - print letter
 * @c: takes in character
 * Return: 0 for no letetr 1 for letter
 */
int _isalpha(int c)
{
	if (c > 'A' && c < 'z')
	{
		return (1);
	}
	else
		return (0);
}
