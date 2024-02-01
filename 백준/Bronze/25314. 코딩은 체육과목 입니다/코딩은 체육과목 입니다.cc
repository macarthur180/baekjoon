#include <stdio.h>

int main() {
	char name[]= "long";

	int a;

	scanf("%d", &a);
	

	for (int i = 0; i < a / 4 ; i++) {
		printf("%s ", name);
	}
	printf("int");
	

	return 0;

}