/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10773.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 17:57:44 by yujo              #+#    #+#             */
/*   Updated: 2020/03/19 18:16:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	int arr[100005] = {0, };
	long long sum = 0;

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
		{
			int j = i;
			while(1)
			{
				if (arr[j] != 0)
				{
					arr[j] = 0;
					break;
				}
				j--;
			}
		}
	}
	for (int i = 0; i < t; i++)
		sum += arr[i];

	printf("%lld", sum);

	return 0;
}
