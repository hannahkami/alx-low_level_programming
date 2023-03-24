#include "main.h"
/**
 * more_numbers - print numbers from 0-14 10 times
 * Return: 0
 */
void more_numbers(void)
{
	int i, p;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (p = 0 ; p <= 14 ; p++)
		{
			if (p >= 10)
				_putchar('1');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
