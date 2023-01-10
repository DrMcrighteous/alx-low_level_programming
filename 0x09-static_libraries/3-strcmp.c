#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string2
 * Return: less than 0 if string1 is less than string2
 * 0 if string1 equals string2
 * more than 0 if string1 is greater than string2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
