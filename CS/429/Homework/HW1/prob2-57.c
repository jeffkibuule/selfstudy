/* Problem 2.57 
   (c) 2014 Joefrey Kibuule
*/
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

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

/* new functions */
void show_short(short x) {
	show_bytes((byte_pointer) &x, sizeof(short));
}

void show_long(long x) {
	show_bytes((byte_pointer) &x, sizeof(long));
}

void show_double(double x) {
	show_bytes((byte_pointer) &x, sizeof(double));
}

int main() {
	int intVariable = 10;
	float floatVariable = 2.5f;
	int* intPointer = &intVariable;
	int intValue = *intPointer;
	short shortVariable = 10;
	long longVariable = 65535;
	double doubleVariable = 0.000125f;

	printf("int:");
	show_int(intVariable);

	printf("float:");
	show_float(floatVariable);

	printf("pointer:");
	show_pointer(intPointer);

	printf("short:");
	show_short(shortVariable);

	printf("long:");
	show_long(longVariable);

	printf("double:");
	show_double(doubleVariable);
}