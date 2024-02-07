#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[100];
	int num;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);

		arr[i] = num;
	}


	int max = arr[0];
	int pos = 0;

	for (int i = 1; i < 9; i++) 
	{
		if (max < arr[i]) 
		{
			max = arr[i];
			pos = i ;
		}
	}
	printf("%d\n", max);
	printf("%d", pos + 1);
}