#include "main.h"
#include <stdio.h>

/**
*print_line - prints a line
*@n: number
*Return:the void
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
