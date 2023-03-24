#include "main.h"
/**
 * print_diagonal - print lines diagonal
 * @n: input variables
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, p;

	if (n <= 0)
		_putchar('\n');
	for (i = 0 ; i < n ; i++)
	{
		for (p = 0 ; p < i ; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
