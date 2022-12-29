#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to the string
 *
 */
void print_rev(char *s)
{
	int c1 = 0, c2;

	while (*(s + c1) != '\0')
	{
		c1++;
	}
	c2 = c1;
	while (c1 >= 0)
		if (*(s + c1) != '"' && c2 != c1)
		{
			_putchar(*(s + c1));
			c1--;
		}
	_putchar('\n');
}
