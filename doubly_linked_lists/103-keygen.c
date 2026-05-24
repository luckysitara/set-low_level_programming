#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - generates a valid key for crackme5 given a username
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *user;
	int len, i, sum, prod, mx, sq_sum, r;
	int idx[6];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}
	user = argv[1];
	len = strlen(user);

	/* f1: (len ^ 0x3b) & 0x3f */
	idx[0] = (len ^ 0x3b) & 0x3f;

	/* f2: (sum of chars ^ 0x4f) & 0x3f */
	sum = 0;
	for (i = 0; i < len; i++)
		sum += (int)user[i];
	idx[1] = (sum ^ 0x4f) & 0x3f;

	/* f3: (product of chars ^ 0x55) & 0x3f */
	prod = 1;
	for (i = 0; i < len; i++)
		prod *= (int)user[i];
	idx[2] = (prod ^ 0x55) & 0x3f;

	/* f4: srand(max_char ^ 0xe), then rand() & 0x3f */
	mx = (int)user[0];
	for (i = 1; i < len; i++)
		if ((int)user[i] > mx)
			mx = (int)user[i];
	srand((unsigned int)(mx ^ 0xe));
	idx[3] = rand() & 0x3f;

	/* f5: (sum of char*char ^ 0xef) & 0x3f */
	sq_sum = 0;
	for (i = 0; i < len; i++)
		sq_sum += (int)user[i] * (int)user[i];
	idx[4] = (sq_sum ^ 0xef) & 0x3f;

	/* f6: call rand() user[0] times, result ^ 0xe5 & 0x3f */
	r = 0;
	for (i = 0; i < (int)user[0]; i++)
		r = rand();
	idx[5] = (r ^ 0xe5) & 0x3f;

	for (i = 0; i < 6; i++)
		putchar(charset[idx[i]]);
	putchar('\n');
	return (0);
}
