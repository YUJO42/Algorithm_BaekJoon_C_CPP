#include <stdio.h>

int main(void)
{
	int month, day;
	int sum = 0;
	
	scanf("%d %d", &month, &day);
	for (int i = 1; i < month; i++)
	{
		if (i == 2)
			sum += 28;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			sum += 30;
		else
			sum += 31;
	}
	
	sum += day;
	
	if (sum % 7 == 1)
		printf ("MON");
	else if (sum % 7 == 2)
		printf ("TUE");
	else if (sum % 7 == 3)
	
		printf ("WED");
	else if (sum % 7 == 4)
		printf ("THU");
	else if (sum % 7 == 5)
		printf ("FRI");
	else if (sum % 7 == 6)
		printf ("SAT");
	else
		printf ("SUN");
	
	return 0;
}
