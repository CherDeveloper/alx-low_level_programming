#include <stdio.h>


/**
 * main - prints the lowercase aplphabet in reverse,
 * followed by a new line, using putchar
 * Return: Always 0 (success)
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
