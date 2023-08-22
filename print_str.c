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

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		container = _putchar(str[i]);
		if (container < 0)
			return (container);
		sum += container;
	}
	return (sum);
}
