/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1964.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:01:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 12:40:49 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	unsigned long long ret = 0;

	scanf("%d", &n);
	/*
	for (int i = 1; i <= n; i++)
	{
		ret += (7 + 3 * (i - 1));
		if (n == 1)
			ret = 5;
	}

	printf("%d", ret % 45678);
	*/
	int i = 0;

	while (++i)
	{
		if (i == n + 1)
			break;
		if (i == 1)
			ret += 5;
		else
			ret += 3 * (i - 1) + 4;
	}

	printf("%lld", ret % 45678);

	return 0;
}
