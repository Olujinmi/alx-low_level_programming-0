#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints slanting line
*@n: number
*Return: returns to the void
*/

void print_diagonal(int n)
{
	int slt, space;

	if (n > 0)
	{
		for (slt = 0; slt < n; slt++)
		{
			for (space = 0; space < slt; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (slt == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
