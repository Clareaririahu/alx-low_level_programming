#include "main.h"

/**
 * _isdigit - checks for a digit (0 throguh 0)
 *@c: The number to check
 * Return: Always return 1 if the number is a digit, else return 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);
	return (0);
}
