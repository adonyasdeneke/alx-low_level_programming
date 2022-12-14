#include "main.h"
/**
 * print_last_digit - print the last digit of the intiger
 * @n: takes in an int
 * Return: return value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
