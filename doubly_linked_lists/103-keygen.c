#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHARSET "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"

/**
* get_indices - computes the 6 charset indices for a username
* @user: the username string
* @idx: array of 6 ints to fill
*/
static void get_indices(char *user, int *idx)
{
	int len, i, sum, prod, mx, sq, r;

	len = strlen(user);
	sum = 0;
	prod = 1;
	mx = (int)user[0];
	sq = 0;
	for (i = 0; i < len; i++)
	{
		sum += (int)user[i];
		prod *= (int)user[i];
		if ((int)user[i] > mx)
			mx = (int)user[i];
		sq += (int)user[i] * (int)user[i];
	}
	idx[0] = (len ^ 0x3b) & 0x3f;
	idx[1] = (sum ^ 0x4f) & 0x3f;
	idx[2] = (prod ^ 0x55) & 0x3f;
	srand((unsigned int)(mx ^ 0xe));
	idx[3] = rand() & 0x3f;
	idx[4] = (sq ^ 0xef) & 0x3f;
	r = 0;
	for (i = 0; i < (int)user[0]; i++)
		r = rand();
	idx[5] = (r ^ 0xe5) & 0x3f;
}

/**
* main - generates a valid key for crackme5 given a username
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int idx[6], i;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}
	get_indices(argv[1], idx);
	for (i = 0; i < 6; i++)
		putchar(CHARSET[idx[i]]);
	putchar('\n');
	return (0);
}
