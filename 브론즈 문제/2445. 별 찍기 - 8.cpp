#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	//윗 부분 출력, 별이 붙을 때까지 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		for (int k = (n * 2) - (i * 2) - 2; k > 0; k--)
		{
			printf(" ");
		}
		for (int l = i + 1; l > 0; l--)
		{
			printf("*");	
		}
		printf("\n");
	}
	// 밑에 부분 출력, 별이 1개 나올 때까지 
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		for (int k = 0; k < (n * 2) - (i * 2); k++)
		{
			printf(" ");
		}
		for (int l = i; l > 0; l--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
