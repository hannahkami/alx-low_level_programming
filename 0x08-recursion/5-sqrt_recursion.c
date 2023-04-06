#include "main.h"
/**
 * find_sqrt - finds the natural square root of an inputted number
 * @num: the number to find the square of
 * @root: thw root to be tested
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number  
 * Return: the natural square root
 * if n does not have a natural square root --1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
