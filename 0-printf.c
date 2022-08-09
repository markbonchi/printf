#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * Printf function for alx-se _printf function project
 */

/**
 * _printf - prints output according to a format
 */

int _printf(const char *format, ...)
{
	int i, j, ret = 0;
	va_list vp;
	char *buf;
	pf_t _val;

	buf = malloc(sizeof(char) * 1024);
	if (!buf)
		return (1);
	va_start(vp, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			buf[ret++] = format[i];

		} else
		{
			switch (format[++i])
			{
				case 'c':
					_val.ch = va_arg(vp, int);
					print_char(_val.ch);
					break;
				case 's':
					_val.str = va_arg(vp, char *);
					j = 0;
					while (_val.str[j++] != '\0')
					{
						buf[ret++] = _val.str[j];
					}
					print_str(_val.str);
					break;
				case '%':
					buf[ret++] = '%';
					_putchar('%');
					break;
				default:
					break;
			}
		}
		i++;
	}
	va_end(vp);
	return (ret);
}
