#include "main.h"
/**
 * _puts - print string
 * @str: string
 *
 * Return: return nothing
 */
void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		if (*(str + counter) != '"')
		{
			_putchar(*(str + counter));
		}
		counter++;
	}
	_putchar('\n');
}
