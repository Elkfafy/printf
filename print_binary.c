#include "main.h"
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
	while (num != 0)
