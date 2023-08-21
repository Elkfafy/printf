#include "main.h"
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
	unsigned int sum = 0;

	sum += _putchar(sign);
	if (num == 0)
	{
		sum += _putchar('0');
		return (sum);
	}
	sum += print_binary_helper(num);
/**
	while (num != 0)
	{
		sum += _putchar(1);
		bit = num & 1;
		num = num >> 1;
		sum += _putchar(bit + '0');
	}
**/
	return (sum);
}
