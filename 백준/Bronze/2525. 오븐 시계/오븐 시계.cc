#include <stdio.h>

int main() {
	int h, m, time;

	scanf("%d %d", &h, &m);
	scanf("%d", &time);



	int total =  (h * 60) + (m + time);


	int h2 = (total / 60);
	int m3 = (total % 60);
	if (h2 >= 24) {
		printf("%d %d", h2 - 24, m3);
		}
	else {
		printf("%d %d", h2, m3);
	}
	
	}
