#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[100];
	int n, num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}

	int v;
	int count = 0;
	scanf("%d", &v);

	for (int i = 0; i < n; i++)
	{
		if (a[i] == v)
		{
			count++;
		}
	}
	printf("%d", count);

}