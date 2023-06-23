#include "main.h"
/**
*_isupper - checks if a character is uppercase or not
*@c: The character to check
*Return: Always return 1 if it is uppercase, else return 0
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
