#include  <stdio.h>

int main()
{
	int n, i;
	int max = -1000001;
	int min = 1000001;
	int rN;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &rN);

		if (max < rN)
			max = rN;
		if (min > rN)
			min = rN;
	}
	printf("%d %d", min, max);

	return 0;
}
