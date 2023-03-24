#include "main.h"
/**
 * _isupper - checks for lowercase and uppercase
 * @c: the character to be checked
 * Return: 1 if uppercase or 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
