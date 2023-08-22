#include "main.h"
/**
 * print_str - print string
 * @str: input string
 *
 * Return: how many wrote to std out
 */
int print_str(char *str)
{
	int i, container, sum = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		container = _putchar(str[i]);
		if (container == -1)
			return (-1);
		sum += container;
	}
	return (sum);
}
