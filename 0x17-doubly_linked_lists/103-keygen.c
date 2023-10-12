#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: pointer to char
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int j, a;
	size_t length, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	p[0] = l[(length ^ 59) & 63];
	for (j = 0, add = 0; j < length; j++)
		add += argv[1][j];
	p[1] = l[(add ^ 79) & 63];
	for (j = 0, a = 1; j < length; j++)
		a *= argv[1][j];
	p[2] = l[(b ^ 85) & 63];
	for (a = argv[1][0], j = 0; j < length; j++)
		if ((char)a <= argv[1][j])
			a = argv[1][j];
	srand(a ^ 14);
	p[3] = l[rand() & 63];
	for (a = 0, j = 0; j < length; j++)
		a += argv[1][j] * argv[1][j];
	p[4] = l[(a ^ 239) & 63];
	for (a = 0, j = 0; (char)j < argv[1][0]; j++)
		a = rand();
	p[5] = l[(a ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
