#include <stdio.h>

/**
 * main - print the alphabet lowercase, uppercase,
 * followed by a newline
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
