#include <stdio.h>


// �� �Ǵ� ���� ����� 

// !!�� �Ǵ� ����!!
// �ش� ���Ϲ������� ���������� c
// c�� �������� ���� 
// �ؿ��� ����������
// ���ϰ�, scanf�� ���ϰ��� �������� ����!!!!!!  
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

// �����ڵ�, ������ �� �� �Ǵ°���? 
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
