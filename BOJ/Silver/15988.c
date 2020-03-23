/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15988.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:23:54 by yujo              #+#    #+#             */
/*   Updated: 2020/03/16 14:49:40 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long long arr[1000005];

long long dp(int n)
{
	if (arr[n])
		return arr[n];
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n == 3)
		return 4;
	return arr[n] = (dp(n - 1) + dp(n - 2) + dp(n - 3)) % 1000000009;
}

int main(void)
{
	int t;

	scanf("%d", &t);

	int n;

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%lld\n", dp(n));
	}
	return 0;
}
