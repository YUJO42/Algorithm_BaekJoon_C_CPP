/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1094.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 13:38:05 by yujo              #+#    #+#             */
/*   Updated: 2020/05/20 14:57:41 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// 완전탐색
int main(void)
{
	int N;
	scanf("%d", &N);

	int count = 0;
	int arr[7] = {64, 32, 16, 8, 4, 2, 1};

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] <= N)
		{
			N -= arr[i];
			count++;
		}
	}

	printf("%d", count);
}

// 2진수 활용
int main(void)
{
	int N;
	scanf("%d", &N);

	int count = 0;
	
	while (N > 0)
	{
		if (N % 2 == 1)
			count++;
		N /= 2;
	}

	printf("%d", count);

	return 0;
}
