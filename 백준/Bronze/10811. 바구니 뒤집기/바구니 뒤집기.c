#include <stdio.h>


int main() {
	int n[101] = { 0 };
	int m;
	int arr;
	int num, time;
	int i, j;
	int k = 0;

	scanf("%d %d", &num, &time);

	for (int y = 1; y <= num; y++)
	{
		n[y] = y;    /// n[1] = 1 ~ n[5] = 5

	}

		for (int x = 1; x <= time; x++)    //time 번 4번 반복해라
		{
			scanf("%d %d", &i, &j);
			for (int z = i; z <= j; z++) // n[4] ~ n[1] 를  4     3   2    1  
			{
				k = n[j];
				n[j] = n[z];
				n[z] = k;
				j--;
			}
					
		}
	

	for (int y = 1; y <= num; y++)
	{
		printf("%d ", n[y]);
	}


}