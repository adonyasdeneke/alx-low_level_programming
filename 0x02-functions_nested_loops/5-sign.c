#include "main.h"
/**
 * print_sign - print sign
 * @n: inputed
 * Return: 1 if n is > zero, 0 if n is 0, -1 if n is < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
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
