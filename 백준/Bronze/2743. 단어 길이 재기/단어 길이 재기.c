#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char x[1000];

	scanf("%s", x);

	int i;
	for (i = 0; x[i] != '\0'; i++) 
		;
	

	printf("%d", i);
}