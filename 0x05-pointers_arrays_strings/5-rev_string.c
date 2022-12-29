#include "main.h"
/**
 * rev_string - reversing string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int temp = 0, c = 0, i;

	for (i = 0; i <= ((c - 1) / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + c - i);
		*(s + c - i) = temp;
	}
