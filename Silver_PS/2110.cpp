o/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2110_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:16:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 11:04:53 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int		main(void)
{
	int home;
	int modem;
	int locate[200010];
	int max = 0;

	scanf("%d %d", &home, &modem);
	for (int i = 0; i < home; i++)
	{
		scanf("%d", &locate[i]);
		max = max < locate[i] ? locate[i] : max;
	}
	sort(locate, loacate + home);
	
	int left = 1;
	int right = max;
	int max_len = 0;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		int cnt = 1;
		int start = locate[0];

		for (int i = 1; i < home; i++)
		{
			if (locate[i] - start >=  mid)
			{
				start = locate[i];
				cnt++;
			}
		}
		if (cnt >= modem)
		{
			max_len = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;	
	
	}
	printf("%d", max_len);
}
