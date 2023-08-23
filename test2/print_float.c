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
	sum += print_int(container, sign);
	if (remaining != 0 || percesion != 0)
	{
		sum += _putchar('.');
		for (i = 0; i < percesion; i++)
		{
			remaining *= 10;
			container = (int) remaining;
			remaining = remaining - container;
			if (i == percesion - 1)
			{
				remaining *= 10;
				if ((int) remaining > 5)
					container++;
			}
			sum += _putchar(container + '0');
		}
	}
	return (sum);
}
