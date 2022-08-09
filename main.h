#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
struct print
{
	char ch;
	char *str;
};
typedef struct print pf_t;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
void print(int integer);

#endif
