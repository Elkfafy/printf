#include "main.h"
/**
 * print_float - print float number
 * @num: input float
 * @percesion: input percesion number
 * @sign: input sign
 *
 * Return: stdout number
 */
int print_float(float num, unsigned int percesion, char sign)
{
	unsigned int i, sum = 0;
	int container = num;
	float remaining = num - container;

	if (remaining < 0)
		remaining *= -1;
	for (i = 0; i < percesion; i++)
		remaining *= 10;
	sum += print_int(container, sign);
	container = remaining;
	if (remaining != 0)
	{
		sum += _putchar('.');
		sum += print_int(remaining, sign);
	}
	return (sum);
}
