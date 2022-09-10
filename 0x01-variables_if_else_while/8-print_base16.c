#include <stdio.h>
/**
 * main - print a to z lowercase
*
* Description - Print a-z lower case
* Return: 0
*/
int main(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
		putchar('\n');
	return (0);
}
