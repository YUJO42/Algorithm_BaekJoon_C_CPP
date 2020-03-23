/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1926.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:31:41 by yujo              #+#    #+#             */
/*   Updated: 2020/03/23 17:04:47 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i < 10)
		{
			if (i % 3 != 0)
				printf("%d", i);
			else
				printf("-");
		}
		else if (i < 100)
		{
			int h = i / 10;
			int s = i % 10;

			if (h % 3 == 0)
				printf("-");
			if (s % 3 == 0 && s != 0)
				printf("-");
			if (i % 10 == 0 && !(h % 3 ==0))
			{
				printf("%d", i);
			}
			else if (s % 3 != 0 && h % 3 != 0)
				printf("%d", i);
		}
		else if (i < 1000)
		{
			int a = i / 100;
			int b = (i / 10) % 10;
			int c = i % 10;

			if (a % 3 == 0)
				printf("-");
			if (b % 3 == 0 && b != 0)
				printf("-");
			if (c % 3 == 0 && c != 0)
				printf("-");
			if ((a % 3 != 0 || a == 0) && (b % 3 != 0 || b == 0) && (c % 3 != 0 || c == 0))
				printf("%d", i);
		}
		else
			printf("1000");
		printf(" ");
	}
	return 0;
}
