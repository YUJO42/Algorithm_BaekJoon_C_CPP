/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10996.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 22:11:14 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 22:25:44 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	if (n == 1)
	{
		printf("*");
	}
	else
	{
		for (int i = 0; i < n * 2; i++)
		{
			int flag = 1; // 1은 홀수 줄(1, 3, 5...) / 0은 짝수 줄
			if (i % 2 == 1)
				flag = 0;
			if (flag == 1)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
			else if (flag == 0)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 != 0)
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}
		}
	}

	return 0;
}
