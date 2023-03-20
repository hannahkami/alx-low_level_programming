#include <stdio.h>
/**
 * main - prints a size of a various types of computer te
 * Return: 0 (success)
 */

int main(void)
{
	long long int a;
printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
