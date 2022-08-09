#include "main.h"

/**
 */

int print_str(char *str)
{
	if (!str)
		return (1);
	_puts(str);
	return (0);

}

/**
 */

int print_char(char c)
{
	if (!c)
		return (1);
	_putchar(c);
	return (0);
}
