#include <stdio.h>

int main(void)
{
	int n;
	int res = 0;
	
	scanf("%d", &n);
	
	while (n > 0)
	{
		if (n % 5 == 0)
		{
			n -= 5;
			res += 1;
		}
		else if (n % 3 == 0)
		{
			n -= 3;
			res += 1;
		}
		else if (n > 5)
		{
			n -= 5;
			res += 1;
		}
		else
		{
			n -= 3;
			res += 1;
		}
	}
	if (n == 0)
		printf("%d", res);
	else
	{
		res = -1;
		printf("%d", res);
	}
		
	return (0);
}

