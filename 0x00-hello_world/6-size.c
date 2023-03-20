#include <stdio.h>
/**
 * main - prints a size of a various types of computer type
 * Description: 'returnprint the various types on the computer'
 * Return 0 (success)
 */

int main(void)
{
	char f;
	int g;
	long int h;
	long long int i;
	float j;
printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(f))
printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(g))
printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(h))
printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(i))
printf("Size of a float: %lu 4 byte(s)\n", (unsigned long)sizeof(j))
return (0);
}
