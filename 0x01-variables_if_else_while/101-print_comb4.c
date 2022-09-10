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
	int m;

	for (j = 0; j < 8; j++)
	{
		for (k = j + 1; k < 9; k++)
		{
			for (m = k + 1; m < 10; m++)
			{
			putchar((j % 10) + '0');
			putchar((k % 10) + '0');
			putchar((m % 10) + '0');
			if (j == 7 && k == 8 && m == 9)
				continue;
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
