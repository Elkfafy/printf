#include "../main.h"
/**
 * main - check task 0 (check if printf return correct output from numbers)
 * need also to handle c - s - % specifiers
 * Return: 0
 */
int main(void)
{
	int pridicted = _printf("%s%c", "This is for testing", '\n');
	int real = printf("%s%c", "This is for testing", '\n');

	printf("pridicted = %d, real =%d\n", pridicted, real);
	return (0);
}
