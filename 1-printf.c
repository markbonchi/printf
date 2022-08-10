#include "main.h"

/**
 */

int print_str(char *str)
{
	_puts(str);
	return (0);

}

/**
 */

int print_char(char c)
{
	_putchar(c);
	return (0);
}

/**
 */

int print_dec(int num)
{
	int i = 1, div, buf = num;

	if (buf < 0)
	{
		_putchar('-');
		buf *= -1;
		i++;
	}

	if (buf < 10)
		_putchar(buf + '0');
	else
	{
		div = 1;
		while (buf / div > 10)
		{
			div *= 10;
			i++;
		}

		for (;div > 0;)
		{
			_putchar(((buf / div) % 10) + '0');
			div /= 10;
		}
	}
	return (i);
}
