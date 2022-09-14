#include <stdio.h>
/**
 ** print_to_98 - prints nos to and fro 98
 *
 * @d: first digit
 */
void print_to_98(int d)
{
	if (d >= 98)
	{
		while (d > 98)
			printf("%d, ", d--);
		printf("%d\n", d);
	}
	else
	{
		while (d < 98)
			printf("%d, ", d++);
		printf("%d\n", d);
	}
}
