#include "main.h"

/**
 * _strlen - length of a string
 * @s: string length to be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
