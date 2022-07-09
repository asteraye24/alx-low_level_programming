#include "main.h"

/**
 * _isupper - is a function to check the upper case alphabets
 * @c: an integer parameter
 * Return: something but success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
