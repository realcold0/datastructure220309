#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	for (int i = 2; i <= 100; i++)
	{
		sum += prime(i);

	}
	printf("\n 소수의 합은 %d", sum);
	return 0;

}


int prime(int a)
{
	

	for(int j = 2; j <= a; j++)
	{
		if(a % j == 0)
		{
			if(a == j)
			{
				printf("더하기 %d ", a);
				return a;
			}
				
			if(a != j)
			{
				return 0;
			}

		}
	}
	return 0;
}