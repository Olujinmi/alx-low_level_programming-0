#include <stdio.h>
/**
 * main - print a to z lowercase
*
* Description - Print a-z lower case
* Return: 0
*/
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
		putchar('\n');
	return (0);
}
