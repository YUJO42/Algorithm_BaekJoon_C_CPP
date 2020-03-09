/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2576.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 10:10:21 by yujo              #+#    #+#             */
/*   Updated: 2020/03/09 10:20:03 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int arr[7];
	int sum = -1;
	int min = 101;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1)
		{
			sum += arr[i];
			if (min > arr[i])
				min = arr[i];
		}
	}
	if (sum == -1)
	{
		printf("%d", sum);
		return 0;
	}
	else
	{
		printf("%d\n", sum + 1);
		printf("%d", min);
	}

	return 0;
}
