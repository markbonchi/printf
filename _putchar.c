#include <unistd.h>

/**
 * _putchar - prints character
 * @c: char argument
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
