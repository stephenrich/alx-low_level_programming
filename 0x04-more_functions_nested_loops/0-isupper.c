#include "main.h"

/**
*_isupper - check if a character is uppercase or not
*@c: character to be be tested
*Return: 1 whetherr it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
}