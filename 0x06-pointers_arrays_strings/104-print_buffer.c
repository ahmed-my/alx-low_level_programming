#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0) {
		printf("\n");
		return;
	}

	printf("---------------------------------\n");

	for (i = 0; i < size; i += 10) {
		printf("%08x: ", i); /* Print the position of the first byte in hexadecimal */

		/* Print the hexadecimal content and the content of the buffer */
		for (j = i; j < i + 10; j++) {
			if (j < size) {
				printf("%02x", (unsigned char)b[j]);

				/* Print an additional space after 2 bytes */
				if (j % 2 != 0) {
					printf(" ");
				}

			/* Print the content of the buffer (as a character if printable, otherwise as a dot) */
				if (isprint(b[j])) {
					printf("%c", b[j]);
				} else {
					printf(".");
				}
			} else {
				printf("  "); /* Fill the remaining empty spaces */
			}
		}

		printf("\n");
	}

	printf("---------------------------------\n");
}
