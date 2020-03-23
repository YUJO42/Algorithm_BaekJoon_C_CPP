/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2798.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:53:19 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 13:00:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n, m;
	int sum = 0;

	scanf("%d %d", &n, &m);

	int arr[n];
	int ret = 0;

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (ret < sum && sum <= m)
					ret = sum;
			}
		}
	}

	printf("%d", ret);

	return 0;
}
