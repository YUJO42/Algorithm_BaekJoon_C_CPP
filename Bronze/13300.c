/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13300.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 16:00:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/22 16:10:24 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);

	int student[2][6] = {0, };
	int s, y;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &s, &y);
		student[s][y -1] += 1;
	}

	int ret = 0;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 6; j++)
			ret += (student[i][j] + k - 1) / k;

	printf("%d\n", ret);

	return 0;
}
