#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char);
int print_str(char *);
int print_int(int, char);
int get_int_length(int);
char *int_to_str(int, char);
int get_str_length(char *);
int get_arr_size(void *, unsigned int);
int get_str_length(char *);
int print_float(float, unsigned int, char);
int print_binary(unsigned int, char);
int _printf(const char *, ...);
int print_hexa_lower(unsigned int n);
int print_hexa_upper(unsigned int n);
#endif
