#include "main.h"

/**
 * main - Prints all arguments it receives.
 *
 * @argc: size of argv array and number of command line arguments
 *
 * @argv: An array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
