#include "main.h"
/**
 * print_str - print string
 * @str: input string
 *
 * Return: how many wrote to std out
 */
int print_str(char *str)
{
	int i, sum = 0;

	for (i = 0; str[i] != '\0'; i++)
		sum += _putchar(str[i]);
	return (sum);
}
