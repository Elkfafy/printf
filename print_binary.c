#include "main.h"
/**
 * print_binary_helper - helper function to use recurssion
 * @num: input number
 *
 * Return: character printed number
 */
int print_binary_helper(unsigned int num)
{
	if (num == 0)
		return (0);
	return (print_binary_helper(num >> 1) + _putchar((num & 1) + '0'));
}
/**
 * print_binary - print unsigned int in binary
 * @num: input number
 * @sign: input sign
 *
 * Return: stdout number
 */
int print_binary(unsigned int num, char sign)
{
	int container;
	unsigned int sum = 0;

	container = _putchar(sign);
	if (container == -1)
		return (-1);
	sum += container;
	if (num == 0)
	{
		container = _putchar('0');
		if (container == -1)
			return (-1);
		sum += container;
		return (sum);
	}
	sum += print_binary_helper(num);
	return (sum);
}
