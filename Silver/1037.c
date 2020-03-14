/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1037.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 12:43:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 14:48:15 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int min = 1000001;
	int max = -1;

	scanf("%d", &n);

	int arr[n];

	for (int i = 0; i < n; i++)
	{	
		scanf("%d", &arr[i]);
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("%d", max * min);

	return 0;
}
