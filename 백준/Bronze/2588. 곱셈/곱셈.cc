#include <stdio.h>

int main() {

	int a,b;

	scanf("%d", &a);
	scanf("%d", &b);

	int line3 = a * (b % 10);
	printf("%d\n", line3);
	int line4 = a * ((b % 100) / 10);
	printf("%d\n", line4);
	int line5 = a * (b / 100);
	printf("%d\n", line5);

	int line6 = a * b;
	printf("%d\n", line6);

	return 0;
}