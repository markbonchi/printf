#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

struct print
{
	char ch;
	char *str;
	int num;
};
typedef struct print pf_t;

int _putchar(char c);
int _puts(char *str);
int print_char(char c);
int print_str(char *str);
int print_dec(int num);
int _printf(const char *format, ...);

#endif
