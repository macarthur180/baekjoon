#include <stdio.h>

int main() {

	int array[1000000];

	int n;
	int num;
	int max, min;

	scanf("%d", &n);
		
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		array[i] = num;
	}

	max = min = array[0];

	for (int i = 0; i < n; i++) {
		if (max < array[i]) max = array[i];
		if (min > array[i]) min = array[i];
	}

	printf("%d %d", min, max );


}