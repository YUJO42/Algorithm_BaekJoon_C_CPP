/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11047.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 22:28:09 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 22:44:28 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int N, K;
	int count = 0;

	scanf("%d %d", &N, &K);

	int arr[N];

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	int i = N - 1;

	while (K)
	{
		if (K == 0)
			break;
		if (K >= arr[i])
		{
			K -= arr[i];
			count++;
		}
		else
			i--;
	}

	printf("%d", count);

	return 0;
}
