#include <stdio.h>

int main(void)
{
	int num; // 초기 입력값 
	int ten;  // 10의 자리 
	int one;  // 1의  자리 
	int sum;  // 10의 자리 + 1의 자리  
	int temp = 0; // num값을 담을 부분 
	int cnt = 0; // 연산횟수 카운트 
	
	scanf("%d", &num); // 초기 값 입력 
	
	temp = num; // num값을 담아줌 
	while (1)
	{
		ten = temp / 10; // 10의 자리 구하기 
		one = temp % 10; // 1의 자리 구하기 
		sum = ten + one; // 더하기 
		temp = (one * 10) + (sum % 10);
		//      1의 자리 * 10 // 합한값의 1의자리 구하기 
		cnt++; // 카운팅 
		
		if (num == temp) // 탈출조건 
			break;
	}	
	printf("%d", cnt); // 결과 출력 
	
	return 0;	
} 
