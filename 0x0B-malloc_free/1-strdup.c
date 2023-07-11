#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  a function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @strr: src string
 *
 * Return: NULL if str = null
 * If memory allocated is insufficient
 *
 *
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	cpy = (char *)malloc((sizeof(char) * len) + 1);
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	cpy[len] = '\0';
	return (cpy);
}
