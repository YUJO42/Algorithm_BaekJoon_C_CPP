/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   시간초과_1920.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:28:12 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 14:50:32 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int m;

	scanf("%d", &n);

	long long arr[n];

	for (int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);

	scanf("%d", &m);

	long long arr2[m];

	for (int i = 0; i < m; i++)
		scanf("%lld", &arr2[i]);

	// 순차탐색말고 이진 탐색 구현해서 풀어보기
	for (int i = 0; i < m; i++)
	{
		int check = 0;
		for (int j = 0; j <= n; j++)
		{
			if (arr2[i] == arr[j])
				check += 1;
		}
		printf("%d\n", check); 
	}

	return 0;
}
