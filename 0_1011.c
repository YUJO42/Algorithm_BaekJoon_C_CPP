/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1011.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 20:45:12 by yujo              #+#    #+#             */
/*   Updated: 2020/03/16 21:02:34 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;

	scanf("%d", &t);

	long long x;
	long long y;

	for (int i = 0; i < t; i++)
	{
		scanf("%lld %lld", &x, &y);
		int count = 0;
		long long len = y - x;
		if (len <= 3)
		{
			printf("%lld\n", len);
			continue;
		}
		for (long long i = 2; i * i <= len; i++)
		{
			current = len - i * i / i;
			count++;
		}
		if (current > len)
			count--;
		printf("%d\n", count);
	}

	return 0;
}
