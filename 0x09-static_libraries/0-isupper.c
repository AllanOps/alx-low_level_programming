#include "main.h"
/**
*_isupper - Function verifying if a char is uppercase or not
*@c: Tested character
*Return: returns 1 if it is uppercase , 0 if not
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
