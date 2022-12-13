#include "main.h"
/**
 * print_sign - print sign
 * @c: inputed
 * Return: 1 if n is > zero, 0 if n is 0, -1 if n is < zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
