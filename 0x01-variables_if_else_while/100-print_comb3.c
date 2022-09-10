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
	int k;
	int l = 1;

	for (j = 0; j <= 9; j++)
	{
		for (k = l; k <= 9; k++)
		{
			putchar(j + '0');
			putchar(k + '0');

			if (j == 9 && k == 9)
				continue;
		putchar(',');
		putchar(' ');
		}
		l++;
	}
		putchar('\n');
	return (0);
}
