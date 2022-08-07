#include <unistd.h>

/**
 * _putchar - prints character
 * @c: char argument
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
