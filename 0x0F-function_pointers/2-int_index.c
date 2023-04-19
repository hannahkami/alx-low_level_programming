#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the size of array
 * @cmp: a pointer to function to be used to compare values
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
