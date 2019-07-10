/*
KwangWoon Univ
YongJik Lee

Modulus operator with only using the bit opeartion

*/


#include <stdio.h>

unsigned int mod(int, unsigned int);

int main(void) {

	unsigned int a = 0;
	int b = 0;
	unsigned int c = 0;
	// a = b%c
	printf("Put Dividend\n");
	scanf("%d", &b);

	printf("\nPut Divisor\n");
	scanf("%d", &c);

	if (c == 0) {

		printf("You Can't divide %d as zero\n", b);
		return -1;
	}
	a = mod(b, c);

	printf("\nRemainder is %d\n", a);
	return 0;
}



unsigned int mod(int b, unsigned int c) {
	unsigned int x = 0;
	unsigned int y = 0;

	if (b >= 0) {
		x = b;
		y = c;
		while (x >= c) {
			while (y <= x) {
				y = y << 1;
			}
			y = y >> 1;
			x = x - y;
			y = c;
		}
	}
	else {
		b = ~b;
		b += 1;
		x = b;
		y = c;
		while (x > c) {
			while (y < x) {
				y = y << 1;
			}
			y = y >> 1;
			x = x - y;
			y = c;
		}
		x = c - x;
	}
	return x;
}
