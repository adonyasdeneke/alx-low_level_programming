#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		char i;

		for (i = 'a'; i < 'z'; i++)
			_putchar(i);
	}
		_putchar('\n');

}
