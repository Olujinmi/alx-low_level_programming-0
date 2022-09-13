#include "main.h"
/**
* _islower - in lowercase
* c: the value
* Return: 0
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
