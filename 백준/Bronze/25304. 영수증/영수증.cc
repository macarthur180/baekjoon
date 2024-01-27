#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	int n, x, y, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		int z = (x * y);
		sum = sum + z;
	}	
	
	if (a == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}

	

	return 0;
}