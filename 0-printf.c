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
	unsigned int i, j = 0, k;
	va_list vp;
	char *buf;
	pf_t _val;

	buf = malloc(sizeof(char) * 1024);
	va_start(vp, format);

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
					_val.ch = va_arg(vp, int);
					buf[j++] = _val.ch;
					_putchar(_val.ch);
					break;
				case 's':
					_val.str = va_arg(vp, char *);
					if (_val.str == NULL)
						_puts("NULL");
					else
					{
						for (k = 0; _val.str[k] != '\0'; k++)
							buf[j++] = _val.str[k];
						_puts(_val.str);
					}
					break;
				case '%':
					buf[j++] = '%';
					_putchar('%');
					break;
				default:
					break;
			}
		} else
		{
			buf[j++] = format[i];
			_putchar(format[i]);
		}
		i++;
	}
	va_end(vp);
	return ((int)j);
}
