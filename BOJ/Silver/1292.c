/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1292.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 11:42:45 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 11:52:28 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int arr[10005] = {0, };
	int put = 0;
	int num = 1;
	for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			arr[put] = num;
			put++;
			if (put > 999)
				break;
		}
		num++;
	}

	int a, b;
	int sum = 0;
	scanf("%d %d", &a, &b);

	for (int i = a - 1; i < b; i++)
		sum += arr[i];

	printf("%d", sum);

	return 0;
}
