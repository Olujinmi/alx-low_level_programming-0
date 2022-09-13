#include "main.h"
/**
* print_last_digit - initialise abs
* @d: the value
* Return: 0
*/

int print_last_digit(int d)
{
	int i = d % 10;

	if (i >= 0)
	{
	return (i);
	}
	else
	{
		return (i * -1);
	}
}
