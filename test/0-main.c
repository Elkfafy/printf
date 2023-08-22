#include "../main.h"
#include "limits.h"
/**
 * main - check task 0 (check if printf return correct output from numbers)
 * need also to handle c - s - % specifiers
 * Return: 0
 */
int main(void)
{
	int pridicted = _printf("%s%c", "This is for testing", '\n');
	int real = printf("%s%c", "This is for testing", '\n');

	printf("pridicted = %d, real = %d\n", pridicted, real);
	pridicted = _printf("%s\n", NULL, '\n');
	printf("pridicted = %d, real = %d\n", pridicted, real);
	pridicted = _printf("ahmed %s%%%c\n", "Test", '\n');
	real = printf("ahmed %s%%%c\n", "Test", '\n');
	printf("pridicted = %d, real = %d\n", pridicted, real);
	pridicted = _printf("%i, %d\n", 1234, -20);
	real = printf("%i, %d\n", 1234, -20);
	printf("pridicted = %d, real = %d\n", pridicted, real);
	pridicted = _printf("%d, %i\n", INT_MAX, INT_MIN);
	real = printf("%d, %i\n", INT_MAX, INT_MIN);
	printf("pridicted = %d, real = %d\n", pridicted, real);
	pridicted = _printf("%d\n", 0);
	real = printf("%d\n", 0);
	printf("pridicted = %d, real = %d\n", pridicted, real);
	pridicted = _printf("binary: %b\n", INT_MAX);
	return (0);
}
