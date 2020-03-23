/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1100.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:41:03 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 17:07:16 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int map[8][8];
	

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 == 0)
					map[i][j] = 0;
				else
					map[i][j] = 1;
			}
		}

		if (i % 2 == 1)
		{
			for (int j = 0; j < 8; j++)
			{
				if (j % 2 == 0)
					map[i][j] = 1;
				else
					map[i][j] = 0;
			}
		}
	}

	//freopen("input.txt", "r", stdin);
	char str[8][8];
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%s", str[i]);
	}


	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (str[i][j] == 'F' && map[i][j] == 0)
				count++;
		}
	}

	printf("%d", count);

	return 0;
}
