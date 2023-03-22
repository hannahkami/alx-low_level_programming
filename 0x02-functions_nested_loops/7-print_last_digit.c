#include "main.h"
/**
 * print_last_digit - prints last digit
 * @x: function parameter
 * Return: y
 *
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	return (y); }
