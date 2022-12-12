#include <stdio.h>

/**
 * main - prints alphabet in reverse low,
 * followed by a newline, using putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
