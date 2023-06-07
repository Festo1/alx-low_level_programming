#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp function does not return 0
 *         If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

   /* check if size is greater than 0 */
	if (size > 0)
	{
		/* check if array and cmp function are not NULL */
		if (array != NULL && cmp != NULL)
		{
			/* loop through array to find a match */
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	/* if no match found, return -1 */
	return (-1);
}
