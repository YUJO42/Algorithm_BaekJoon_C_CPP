/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2506.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 01:48:20 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 01:51:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int arr[n];
	
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int sum = 0;
	int count = 1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
			count = 1;
		else
		{
			sum += count;
			count++;
		}
	}
	printf("%d", sum);

	return 0;
}
