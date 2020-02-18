#include <stdio.h>

int main(void)
{
	int n, x;
	int value;
	
	scanf("%d %d", &n, &x);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", value);
		
		if (value < x)
			printf("%d ", value);
	}
	
	return 0;
}
