/* Problem 2.59 */
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

int main (){ 
	int x = 0x89ABCDEF;
	int y = 0x76543210;

	/* get least significant byte of x and store */
	int z = x & 0xFF;

	/* get bits of y ignoring least significant byte */
	int aa = y & ~0xFF;

	/* combine bit values together (should not overflow) */
	int zaa = z | aa;

	/* print out value */
	printf("value:");
	show_int(zaa);
}