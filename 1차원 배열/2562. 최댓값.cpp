#include <stdio.h>

int main(void)
{
	int n = 9;
	int arr[9];
	int max = 0;
	int num;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int j = 0; j < n; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
			num = j + 1;
		}
	}
	
	printf("%d\n", max);
	printf("%d\n", num);
	return 0;
}
