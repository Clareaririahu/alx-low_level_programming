 #include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *@str: points to the string to print
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
