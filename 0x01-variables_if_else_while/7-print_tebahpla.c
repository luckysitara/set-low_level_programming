#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bh;

	for (bh = 'z'; bh >= 'a'; bh--)
	{
		putchar(bh);
	}
	putchar('\n');
	return (0);
}
