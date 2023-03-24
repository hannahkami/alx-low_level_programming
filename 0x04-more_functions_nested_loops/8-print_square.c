#include "main.h"
/**
 * print_square - prints asquare
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{
	int i, p;

	if (size <= 0)
		_putchar('\n');

	for (i = 0 ; i < (size) ; i++)
	{
		for (p = 0 ; p < (size) ; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
