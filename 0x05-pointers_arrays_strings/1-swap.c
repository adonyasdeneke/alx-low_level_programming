#include "main.h"
/**
 * swap_int - swap two intiger value
 * @a: value 1
 * @b: value 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
