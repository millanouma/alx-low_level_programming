#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to thr firts occurence of the character
 * OR c in the string s, or NULL if c is not found
 *
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
