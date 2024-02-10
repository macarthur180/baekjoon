#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	int arr[100] = { 0 };
	scanf("%d %d", &n, &m);

	int i; int j; int k; 
	

	
		for (int y = 1; y <= m; y++)
		{
			scanf("%d %d %d", &i, &j, &k);
			for (int z = i; z <= j; z++)
			{
				arr[z] = k;				
			}

		}
		
		for (int x = 1; x <= n; x++)
		{
			printf("%d ", arr[x]);

		}

	return 0;
}