/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2563.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 13:59:29 by yujo              #+#    #+#             */
/*   Updated: 2020/03/17 16:39:05 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int map[101][101] = {0, };
	int n;
	
	scanf("%d", &n);

	int x, y;

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				map[x + j][y + k] = 1;
			}
		}
	}

	int count = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (map[i][j] == 1)
				count++;
		}
	}

	printf("%d", count);

	return 0;
}
