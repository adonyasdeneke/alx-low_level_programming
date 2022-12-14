#include "main.h"
/**
 * times_table - times table for intiger up to nine
 * Return: no return value void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j);
		}
		_putchar('\n');
	}
}
