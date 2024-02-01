#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	int  x, y;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {

		scanf("%d %d", &x, &y);
		printf("Case #%d: %d + %d = %d\n", i, x, y, x + y);

	}


	return 0;
}