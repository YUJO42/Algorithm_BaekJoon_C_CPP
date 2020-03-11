/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1929.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:45:06 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 14:01:45 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int isprime(int n)
{
	if (n < 2)
		return 0;

	int i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(void)
{
	int m, n;

	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		if (isprime(i))
			printf("%d\n", i);
	}

	return 0;
}
