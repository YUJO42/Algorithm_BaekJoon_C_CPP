/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1204.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 07:34:59 by yujo              #+#    #+#             */
/*   Updated: 2020/03/24 08:01:04 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int n;
int main(void)
{

	int t;
	scanf("%d", &t);

	if (t == 0)
		return 0;

	for (int i = 1; i <= t; i++)
	{
		int arr[105] = {0, };
		int T;
		scanf("%d", &T);
		for (int j = 1; j <= 1000; j++)
		{
			scanf("%d", &n);
			arr[n] += 1;
		}
		int count = 0;
		int max = 0;
		for (int k = 0; k < 101; k++)
		{
			if (count <= arr[k])
			{
				count = arr[k];
				max = k;
			}
		}
		printf("#%d %d\n", T, max);
	}

	return 0;
}
