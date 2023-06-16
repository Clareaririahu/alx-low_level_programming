#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 * Description: 'Print the last digit of a number in the variable'
 * Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (ld > 5)
	{
		printf("last digit of %d is %d and is greater than 5/n", n, 10);
	}
	else if (ld == 0)
	{
		printf("last digit of %d is %d and is 0/n", n, 10);
	}
	else
	{	printf("last digit of %d is %d and is less than 6 and not 0/n", n, 10);
	}
	return (0);
}
