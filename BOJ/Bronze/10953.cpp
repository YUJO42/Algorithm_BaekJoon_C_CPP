#include <stdio.h>

int main(void)
{
	int n;
	int a, b;
	
	scanf("%d", &n);
	
	int arr[n];
		
	for (int i = 0; i < n; i++)
	{
		scanf("%d,%d", &a, &b);
		arr[i] = a + b;
	}
	
	for (int j = 0; j < n; j++)
	{
		printf("%d\n", arr[j]);
	}
	return 0;
} 
