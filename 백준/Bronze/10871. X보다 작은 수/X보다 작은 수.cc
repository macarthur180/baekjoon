#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10000];

	int n, num, x;
	scanf("%d %d", &n, &x);


	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}

	for (int i = 0; i < n; i++) {
		if (a[i] < x)
		{
			printf("%d ", a[i]);
		}
	}
}