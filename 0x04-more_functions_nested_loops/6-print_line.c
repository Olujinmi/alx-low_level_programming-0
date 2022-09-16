#include "main.h"

/**
* print_line - prints line
* @n: char
*Return: to the void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++;)
	{
		if (n > 0)
		{
			_putchar('_');
		}

	}
		else
			_putchar('\n');
}
