#include "main.h"

/**
 * rev_str - function that reverses a string
 * @s: The output to reverse
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length, i;

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
