#include "main.h"
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
	int i;
	va_list vp;
	pf_t _val;
	char buff[1024];

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
					_putchar(_val.ch);
					break;
				case 's':
					_val.str = va_arg(vp, char *);
					if (_val.str == NULL)
						_puts("NULL");
					else
						_puts(_val.str);
					bu
					break;
				case '%':
					_putchar('%');
					buff[i] = format[i];
					break;
				default:
					break;
			}
		} else
		{
			buff[i] = format[i];
			_putchar(format[i]);
		}
		i++;
	}
	va_end(vp);
	return (i);
}
