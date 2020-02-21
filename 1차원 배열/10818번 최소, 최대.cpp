#include  <stdio.h>

int main(void)
{
	int n;
	int max = -1000000;
	int min = 1000000;
	int arr;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr);
		if (max < arr)
			max = arr;
		if (min > arr)
			min = arr;		
	}
	printf("%d %d", min, max);
	
	return 0;
}
