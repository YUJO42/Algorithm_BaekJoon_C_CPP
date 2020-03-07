/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x1100.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 16:14:32 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 20:08:17 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int map[8][8];
	char input[8];
	int count = 0;

	freopen("input.txt", "r", stdin);
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + 2) % 2 == 0)
			{
				if ((j + 2) % 2 == 0)
					map[i][j] = 0;
				else if ((j + 2) % 2 == 1)
					map[i][j] = 1;
			}
			else if((i + 2) % 2 == 1)
			{
				if ((j + 2) % 2 == 0)
					map[i][j] = 1;
				else if ((j + 2) % 2 == 1)
					map[i][j] = 0;
			}
		}
	}
	
	for (int i = 0; i < 8; i++)
	{
		scanf("%s", input);
		for (int j = 0; j < 8; j++)
		{
			if (map[i][j] == 1 && input[j] == 'F')
				count += 1;
		}
	}

	printf("%d", count);

	return 0;
}
