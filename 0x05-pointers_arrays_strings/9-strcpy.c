#include "main.h"

/**
 * _strcpy - function that copy the string
 * @dest: this is a destiny
 * @src: the copy
 *
 * Return: this return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

