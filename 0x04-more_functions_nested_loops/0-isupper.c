#include "main.h"

/**
* _isupper - checks for upper case
* @c: letter to be checked
* Return: 1 or 0 depends
*/

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
	return (1);
	}

	return (0);
}
