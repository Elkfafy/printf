#include "main.h"
/**
 * handle_format - handle specifiers text
 * @format: input format sepcifiers
 * @args: va_list
 *
 * Return: characters printed
 */
int handle_format(char **format, va_list args)
{
	int container, chars_printed = 0;

	switch (**format)
	{
		case '%':
			container = _putchar('%');
			if (container == -1)
				return (-1);
			chars_printed += container;
			break;
		case 'c':
			container = _putchar(va_arg(args, int));
			if (container == -1)
				return (-1);
			chars_printed += container;
			break;
		case 's':
			container = print_str(va_arg(args, char *));
			if (container == -1)
				return (-1);
			chars_printed += container;
			break;
	}
	(*format)++;
	return (chars_printed);
}
/**
 * _printf - a function that produces output according to a format.
 * @format: the string.
 * Return: number of characters printed excluding null.
 */
int _printf(char *format, ...)
{
	int chars_printed = 0;
	va_list args;

	if (format == NULL)
		return (0);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			chars_printed += handle_format(&format, args);
		}
		else
		{
			chars_printed += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (chars_printed);
}