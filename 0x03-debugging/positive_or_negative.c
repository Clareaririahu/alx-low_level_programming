#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
(* 0 : The number to check
* Return: 0 if successful
*/
void postitive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
