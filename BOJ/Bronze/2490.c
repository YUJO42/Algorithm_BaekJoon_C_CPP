/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2490.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 22:25:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 22:34:55 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int yut[4];
	char count;

	for (int i = 0; i < 3; i++)
	{
		count = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &yut[j]);
			if(yut[j] == 0)
				count++;
		}
		if (count == 1)
			printf("A\n");
		else if (count == 2)
			printf("B\n");
		else if (count == 3)
			printf("C\n");
		else if (count == 4)
			printf("D\n");
		else
			printf("E\n");
	}

	return 0;
}
