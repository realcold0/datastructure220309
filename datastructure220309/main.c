#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum = 0;
	for (int i = 2; i <= 100; i++)
	{
		sum += prime(i);

	}
	printf("\n �Ҽ��� ���� %d", sum);
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
				printf("���ϱ� %d ", a);
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