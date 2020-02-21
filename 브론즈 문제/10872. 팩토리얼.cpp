#include <stdio.h>

int main(void)
{
	int n;
	int res = 1;
	
	scanf("%d", &n);
	for (int i = n; i > 1; i--)
	{
		res = res * i;
	}
	printf("%d", res);
	
	return 0;
}

