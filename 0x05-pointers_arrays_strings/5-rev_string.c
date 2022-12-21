#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char ch;
	int a, b, c;

	a = 0;
	b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		ch = s[a];
		s[a] = s[c];
		s[c--] = ch;
	}
}
