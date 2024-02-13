#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() 
{
	int num[1000];
	int x, y;
	int dif;
	int  count = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &x);

		num[i] = x % 42;

	}

		for (int j = 0; j < 10; j++)
		{   
			for (int k = j+1; k < 10; k++) 
			{
				if (num[j] == num[k])
				{
					num[j] = -1;
				}
				
			}
			if (num[j] != -1) 
			{
				count++;
			}
			
		}

		printf("%d", count);


}
