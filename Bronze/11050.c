/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11050.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:01:57 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 13:35:43 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int facto(int n)
{
	if (n < 1)
		return 1;

	int ret = 1;

	for (int i = 2; i <= n; i++)
		ret *= i;
	
	return (ret);
}

int main(void)
{
	int n, k;

	scanf("%d %d", &n, &k);

	printf("%d", facto(n) / (facto(k) * facto(n - k)));

	return 0;
}
