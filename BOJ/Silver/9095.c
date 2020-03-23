/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9095.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 18:55:23 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 19:01:22 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int dp(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	if (n == 3)
		return 4;

	return(dp(n - 1) + dp(n - 2) + dp(n - 3));
}

int main(void)
{
	int t;

	scanf("%d", &t);

	int n;

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%d\n", dp(n));
	}

	return 0;
}
