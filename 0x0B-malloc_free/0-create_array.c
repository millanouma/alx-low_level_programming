#include "main.h"
#include <stdlib.h>
/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned integer size of array
 * @c: initial character
 *
 * Return: NULL if size = 0
 * A pointer to the array or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

