#include <stdio.h>
/**
* main - print the size of various types on the PC it is run on
* Description: prints the size of various types on the computer it is compiled and run on
* Return: 0
*/
int main(void)
{
char c;
int i;
long l;
long long lo;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(l));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lo));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
