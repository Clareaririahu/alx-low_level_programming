#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 * @str: the string to print
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
