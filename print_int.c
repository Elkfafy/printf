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
		num %= 10;
		count++;
	}
	return (count);
}
/**
 * int_to_str - integer to string
 * @num: input number
 * @sign: input sign
 *
 * Return: the parsed string
 */
char *int_to_str(int num)
{
	char sign = '+';
	int num_length = get_int_length(num), cont;
	char *result = malloc((num_length + 2) * sizeof(char));
	
	if (result == NULL)
		return (NULL);
	result[num_length] = '\0';
	for (num_length -= 1; num_length > 0; num_length--)
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
	result[num_length] = sign;
	return (result);
}
/**
 * print_int - print integer
 * @num: input number
 *
 * Return: number of printing output
 */
int print_int(int num)
{
	char *str_num = int_to_str(num);

	return (print_str(str_num));
}
