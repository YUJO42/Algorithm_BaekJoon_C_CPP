#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;
	
	scanf("%d", &n);
	
	char arr[n];
	
	scanf("%s", &arr);
	for (int i = 0; i < n; i++)
	{
		sum = sum + (arr[i] - '0');
	}
	printf("%d", sum);
	
	return 0;
}
