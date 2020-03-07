/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1547.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 16:05:26 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 16:10:17 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int m;
	int x, y;
	int ball = 1;

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y);
		if (x == ball && y != x)
			ball = y;
		else if(y == ball && y != x)
			ball = x;
	}
	if (ball > 3 || ball < 1)
		return -1;
	printf("%d", ball);
	return 0;
}
