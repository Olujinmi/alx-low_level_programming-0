#include "main.h"
/**
* _abs- initialise abs
* @c: the value
* Return: 0
*/

int _abs(int c)
{
	if (c > 0 || c != 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
