#include <stdio.h>
/**
 *main - Entry point
 * Description: 'Print all single digit numbers of base 10 from 0'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
