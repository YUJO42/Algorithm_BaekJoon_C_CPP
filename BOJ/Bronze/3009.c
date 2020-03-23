/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3009.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:24:27 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 20:42:19 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int x[3];
	int y[3];

	int put_x = 0;
	int put_y = 0;
	
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i != j && x[i] == x[j])
			{
				x[i] = 0;
				x[j] = 0;
			}
			if (i != j && y[i] == y[j])
			{
				y[i] = 0;
				y[j] = 0;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (x[i] > 0)
			put_x = x[i];
		if (y[i] > 0)
			put_y = y[i];
	}

	printf("%d %d", put_x, put_y);

	return 0;
}
