#include <stdio.h>


int main() {
	int A = 0;
	int B = 0;
	int C = 0;


	scanf("%d %d %d", &A, &B, &C);


	int one = (A + B) % C;
	printf("%d\n", one);

	int two = ((A % C) + (B % C)) % C;
	printf("%d\n", two);

	int thr = (A*B) % C;
	printf("%d\n", thr);

	int four = ((A % C) * (B % C)) % C;
	printf("%d\n", four);

	return 0;

}