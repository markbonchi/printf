#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - This function is to immitate printf
 * @format: First parameter
 * Return: ret.
 */
int _printf(const char *format, ...)
{
	int i, j, ret = 0;
	va_list vp;
	pf_t _val;

	va_start(vp, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			ret++;
		} else
		{
			switch (format[++i])
			{
				case 'c':
					_val.ch = va_arg(vp, int);
					print_char(_val.ch);
					ret++;
					break;
				case 's':
					_val.str = va_arg(vp, char *);
					print_str(_val.str);
					j = 0;
					while (_val.str[j] != '\0')
					{
						ret++;
						j++;
					}
					break;
				case '%':
					_putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					ret += 2;
					break;
			}
		}
		i++;
	}
	va_end(vp);
	return (ret);
}
