#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int p;

	for (p = 0; p < 52; p++)
	{
		putchar(alpha[p]);
	}
	putchar('\n');
	return (0);
}
