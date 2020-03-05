/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2110_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:16:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/05 19:18:42 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quick_sort(int *list, int left, int right)
{
	if (left >= right)
		return ;        
	int pivot = left;
	int start = left + 1;
	int end = right;
	while (start <= end) 
	{
		while (list[pivot] >= list[start] && start <= right)
			start++;
		while (list[pivot] <= list[end] && end > left)
			end--;
		if (start > end)
			swap(&list[pivot], &list[end]);
		else
			swap(&list[start], &list[end]);
	}
	quick_sort(list, left, end - 1);
	quick_sort(list, end + 1, right);
}

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
	quick_sort(locate, 0, home - 1);
	
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

