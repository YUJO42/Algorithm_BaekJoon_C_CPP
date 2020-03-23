/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1984.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 21:19:25 by yujo              #+#    #+#             */
/*   Updated: 2020/03/23 21:36:37 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[10] = {0, };

int main(void)
{
	int T;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		int min = 10001;
		int max = -1;;
		int sum = 0;
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
			if (max < arr[j])
				max = arr[j];
			if (min > arr[j])
				min = arr[j];
		}
		sum -= (max + min);
		printf("#%d %d\n", i, (int)((double)sum / 8 + 0.5));
	}

	return 0;
}
