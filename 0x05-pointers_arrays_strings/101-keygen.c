#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int g, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (g = 0; g < 100; g++)
	{
		pass[g] = rand() % 78;
		sum += (pass[g] + '0');
		putchar(pass[g] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
