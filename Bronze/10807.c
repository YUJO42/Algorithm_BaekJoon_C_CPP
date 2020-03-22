/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10807.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 14:42:29 by yujo              #+#    #+#             */
/*   Updated: 2020/03/22 14:45:17 by yujo             ###   ########.fr       */
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
	
	int x;
	int count = 0;

	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (x == arr[i])
			count++;
	}

	printf("%d", count);

	return 0;
}
