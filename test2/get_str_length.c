#include "main.h"
/**
 * get_arr_size - get_arr_size
 * @arr: input array
 * @unit_size: unit size
 *
 * Return: size of the array
 */
int get_arr_size(void *arr, unsigned int unit_size)
{
	return (sizeof(arr) / unit_size);
}
/**
 * get_str_length - get string size
 * @str: input string
 *
 * Return: string length
 */
int get_str_length(char *str)
{
	return (get_arr_size(str, sizeof(char)) - 1);
}
