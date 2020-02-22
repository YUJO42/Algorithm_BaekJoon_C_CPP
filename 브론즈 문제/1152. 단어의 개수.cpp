#include <stdio.h>

int	ft_strlen(char *str)
{
	int count = 0;
	
	while (str[count])
		count++;
	return (count);
}

int main(void)
{
	char str[1000000];
	int count = 0;
	
	scanf ("%s", str);
	int i = 0;
	while (str[i])
		printf("%c", str[i++]);
	printf ("%d", ft_strlen(*str));
	return 0;
}
