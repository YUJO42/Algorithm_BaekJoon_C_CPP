/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2751.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:26:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/05 21:36:39 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quick_sort(int *arr, int left, int right)
{
	if (left >= right)
		return ;
	int pivot = left;
	int start = left + 1;
	int end = right;
	while (start <= end)
	{
		while (arr[pivot] >= arr[start] && start <= right)
			start++;
		while (arr[pivot] <= arr[end] && end > left)
			end--;
		if (start > end)
			swap(&arr[pivot], &arr[end]);
		else
			swap(&arr[start], &arr[end]);
	}
	quick_sort(arr, left, end - 1);
	quick_sort(arr, end + 1, right);
}

int		main(void)
{
	int n;
	int arr[1000001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	quick_sort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}
