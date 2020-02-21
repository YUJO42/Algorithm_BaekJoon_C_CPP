#include <stdio.h>


// 안 되는 이유 물어보기 

// !!안 되는 이유!!
// 해당 와일문에서는 종결조건이 c
// c를 기준으로 종료 
// 밑에는 종결조건이
// 리턴값, scanf의 리턴값을 기준으로 종료!!!!!!  
int main(void)
{
	char c;
	
	while (1)
	{
		scanf("%c", &c);
		if (c == EOF)
			break;
		printf("%c", c);
	}
	
	return 0;
}

// 정답코드, 위에는 왜 안 되는거지? 
#include <stdio.h>

int main(void)
{
	char c;
	
	while (scanf("%c", &c) != EOF)
	{
		printf("%c", c);
	}
	
	return 0;
}
