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
파일의 끝을 표현하기 위한 함수 (- 1의 앖을 가짐)
콘솔 창에서 crtl + z == EOF

*/ 
