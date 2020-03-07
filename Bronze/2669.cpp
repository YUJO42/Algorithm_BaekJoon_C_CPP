#include <stdio.h>
#include <string.h>

int main(void)
{
	int arr[101][101] = {0,};
	int x1, x2;
	int y1, y2;
	
	for(int i = 0; i < 4; i++)
	{
		scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
		printf("%d %d %d %d", x1, x2, y1, y2);
	}
	
}
