/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10250.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 22:32:37 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 22:46:34 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t; // test case
	int h, w // height, width;
	int n; // number;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		int hotel[h][w];
		for (int i = 1; i <= h; i++) //호텔 방 번호 입력
		{
			hotel[i] = i;
			for (int j = 1; j <= w; j++)
				hotel[i][j] = j;
		}

	}


	return 0;
}
