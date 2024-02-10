#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{

	int arr[1010] = { 0 }; 
	int n, m;
	int i, j = 0;
	scanf("%d %d", &n, &m);

	for (int x = 1; x <= n; x++)
	{
		arr[x] = x;
	}
	
	for (int y = 1; y <= m; y++) 
		{
			scanf("%d %d", &i, &j);
			arr[101] = arr[i];
			arr[i] = arr[j];
			arr[j] = arr[101];
		}

	for (int z = 1; z <= n; z++) 
		{
			printf("%d ", arr[z]);
		}
	return 0;
}