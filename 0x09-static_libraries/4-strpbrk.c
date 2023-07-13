#include "main.h"
#include <stddef.h>
/**
 * *_strpbk -  a function that searches a string for any of a set of bytes.
 * @s: string to search
 * @accept - string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches in accept
 * Or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
