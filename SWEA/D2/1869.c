/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1869.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:01:09 by yujo              #+#    #+#             */
/*   Updated: 2020/03/23 20:30:12 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int price[1000005] = {0, };

int main(void)
{
	int T;
	scanf("%d", &T);

	for (int test_case = 1; test_case <= T; test_case++)
	{
		int N;
		scanf("%d", &N);

		for (int input = 0; input < N; input++)
			scanf("%d", &price[input]);
		
		long long profit = 0;
		int max = price[N - 1];
		for (int i = N - 2; i >= 0; i--)
		{
			if (max > price[i])
				profit += max - price[i];
			if (max < price[i])
				max = price[i];
		}
		printf("#%d %lld\n", test_case, profit);
	}

	return 0;
}
