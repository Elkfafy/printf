#include "../main.h"
/**
 * main - test print float using print_float
 * 
 * Return: 0
 */
int main(void)
{
	printf("printf: %.20f\n", -2.22f);
	print_str("print_float: ");
	print_float(-2.22f, 20, 0);
	_putchar('\n');
	return (0);
}
