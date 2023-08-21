#include "main.h"

/**
 * _str_len - function that returns the length of a string.
 * @strg: the string.
 * Return: integer.
 */
int _str_len(char *strg)
{
if (*strg == '\0')
return (0);
else
return (1 + _str_len(strg + 1));
}
/**
 * print_strg - print string.
 * @strg: the string.
 * Return: void
 */
void print_str(char *strg)
{
int i;
for (i = 0; strg[i] != '\0'; i++)
{
_putchar(strg[i]);
}
}
/**
 * _printf - a function that produces output according to a format.
 * @format: the string.
 * Return: number of characters printed excluding null.
 */
int _printf(const char *format, ...)
{
  int chars, chars_printed = 0;
  char *strg;
  va_list args;
  va_start(args, format);
  while (*format != '\0')
    {
      if (*format == '%')
	formatt++;
      {
	if (*format == 'c')
	  {
	    chars = va_arg(args, int);
	    _putchar(char);
	    chars_printed++;
	  }
	else if (*format == 's')
	  {
	    strg = va_arg(args, char *);
	    print_strg(strg);
	    chars_printed += _str_len(strg);
	  }
      }
      format++;
    }
  if (format == NULL)
    {
      _putchar('\n');
      chars_printed;
    }
  va_end(args, format);
  return(chars_printed);
}
