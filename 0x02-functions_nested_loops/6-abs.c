#include "main.h"
/**
 * _abs - absolute value of intiger
 * @n: takes an intiger
 * Return: 1 if>0, 0 if ==0, positive if negative
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
