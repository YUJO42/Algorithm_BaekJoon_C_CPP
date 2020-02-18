#include <stdio.h>

int main(void)
{
	int n;
	int res;
	
	scanf("%d", &n);
	
	res = 0;
	for (int i = 1; i <= n; i++)
	{
		res = res + i;
	}
	printf("%d", res);
	
	return 0;
}
