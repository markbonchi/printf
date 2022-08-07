#include "main.h"

/**
 * _puts - print string to stdout
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
