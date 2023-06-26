#include "main.h"

/**
 * rev_str - a function that reverses a string
 * @s: The output to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	while (i < length / 2)
	{
		char temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1] = temp;
		i++;
	}
}
