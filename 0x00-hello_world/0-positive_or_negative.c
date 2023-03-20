#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign random number
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(o));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		print("%d is negative", n);
	return (0); }
