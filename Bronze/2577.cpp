#include <stdio.h>

int main(void)
{
	int a, b, c;
	int num;
	int arr[10];
	
	scanf("%d\n%d\n%d", &a, &b, &c);
	
	num = a * b * c;
	
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
	
	while (num != 0)
	{
		arr[num % 10] += 1;
		num /= 10;
	}
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
