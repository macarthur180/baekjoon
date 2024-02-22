#include <stdio.h>


int main() {
	double ave = 0;
	double sum = 0;
	int m;
	int n;
	int score[1000] = { 0 };
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &m);
		score[i] = m;
	
	}
	
	int max = 0;
	max = score[1];

	for (int i = 1; i <= n; i++) {
		if (max < score[i]) {
			max = score[i];
		}
		
	}

	for (int j = 1; j <= n; j++) {
		
		
		ave = ((double) score[j] / (double)max) *  100 ;
		sum += ave ;


		
	}

	printf("%f", sum / n);
}