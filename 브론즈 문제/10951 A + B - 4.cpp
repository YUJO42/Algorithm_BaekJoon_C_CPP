#include <stdio.h>

int main(void)
{
	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
	
	return 0;
}

/*

EOF = End Of File
������ ���� ǥ���ϱ� ���� �Լ� (- 1�� ���� ����)
�ܼ� â���� crtl + z == EOF

*/ 
