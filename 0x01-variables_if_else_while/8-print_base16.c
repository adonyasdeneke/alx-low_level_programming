#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if ((i > 57) && (i < 97))
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
