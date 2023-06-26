#include "main.h"

/**
 * swap_int - a function, which swaps the values of two integers
 * @a: 1st integer to swap
 * @b: 2nd integer to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
