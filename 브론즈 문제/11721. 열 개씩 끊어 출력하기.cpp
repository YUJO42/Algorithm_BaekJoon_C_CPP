#include <stdio.h>

int ft_strlen(char *str)
{
	int count = 0;
	
	while (str[count])
		count++;
	return (count);
}

int main(void)
{
	char str[100];
	int count;
	int i = 0;
	
	scanf("%s", str);
	
	while (str[i])
	{
		count = 0;
		while (count < 10)
		{
			printf("%c", str[i]);
			i += 1;
			count += 1;
			if (i == ft_strlen(str))
				break;
		}
		printf("\n");
	}
	
	return 0;
}

