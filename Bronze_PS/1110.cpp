#include <stdio.h>

int main(void)
{
	int num; // �ʱ� �Է°� 
	int ten;  // 10�� �ڸ� 
	int one;  // 1��  �ڸ� 
	int sum;  // 10�� �ڸ� + 1�� �ڸ�  
	int temp = 0; // num���� ���� �κ� 
	int cnt = 0; // ����Ƚ�� ī��Ʈ 
	
	scanf("%d", &num); // �ʱ� �� �Է� 
	
	temp = num; // num���� ����� 
	while (1)
	{
		ten = temp / 10; // 10�� �ڸ� ���ϱ� 
		one = temp % 10; // 1�� �ڸ� ���ϱ� 
		sum = ten + one; // ���ϱ� 
		temp = (one * 10) + (sum % 10);
		//      1�� �ڸ� * 10 // ���Ѱ��� 1���ڸ� ���ϱ� 
		cnt++; // ī���� 
		
		if (num == temp) // Ż������ 
			break;
	}	
	printf("%d", cnt); // ��� ��� 
	
	return 0;	
} 
