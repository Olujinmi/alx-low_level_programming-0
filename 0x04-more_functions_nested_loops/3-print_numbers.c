#include "main.h"

/**
* print_numbers - prints 0 -9 
* @i: numbers
* Return: to the void
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
