#include "main.h"
/**
 * get_int_length - get integer length
 * @num: input number
 *
 * Return: how many digit the number has
 */
int get_int_length(int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
/**
 * int_to_str - integer to string
 * @num: input number
 * @sgn: input sign
 *
 * Return: the parsed string
 */
char *int_to_str(int num, char sgn)
{
	char sign = sgn;
	int if_sign = (sgn || num < 0) ? 1 : 0;
	int num_length = get_int_length(num), cont;
	char *result = malloc((num_length + 1 + if_sign) * sizeof(char));

	if (result == NULL)
		return (NULL);
	result[num_length + if_sign] = '\0';
	num_length = num_length + if_sign - 1;
	for (; num_length >= if_sign; num_length--)
	{
		cont = num % 10;
		if (cont < 0)
		{
			cont *= -1;
			sign = '-';
		}
		result[num_length] = cont + '0';
		num /= 10;
	}
	if (if_sign)
		result[num_length] = sign;
	return (result);
}
/**
 * print_int - print integer
 * @num: input number
 * @sign: input sign
 *
 * Return: number of printing output
 */
int print_int(int num, char sign)
{
	char *str_num = int_to_str(num, sign);
	int sum = print_str(str_num);

	free(str_num);
	return (sum);
}
