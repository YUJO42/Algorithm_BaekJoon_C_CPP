/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4948.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 13:17:50 by yujo              #+#    #+#             */
/*   Updated: 2020/03/18 13:50:35 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[123456 * 2 + 1] = {0, };

int prime_cnt(int n)
{
	int count = 0;
	for (int i = n + 1; i <= n * 2; i++)
	{
		if (arr[i] == 0)
			count++;
	}
	return count;
}

int main(void)
{
	int n;
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 123456 * 2; i++)
	{
		for (int j = i * 2; j <= 123456 * 2; j += i)
			arr[j] = 1;
	}
	while(1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		printf("%d\n", prime_cnt(n)); 
	}

	return 0;
}
