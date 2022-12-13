#include "main.h"
/**
 * print_sign - print sign
 * @c: inputed
 * Return: return 0, 1 or -1
 */
int print_sign(int c)
{
	if (c < 0)
	{
		return (-1);
	}
	else if (c == 0)
	{
		return (0);
	}
	else
		return (1);
}
