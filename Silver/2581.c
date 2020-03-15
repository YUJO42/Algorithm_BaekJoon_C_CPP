/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2581.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:12:33 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 17:34:30 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int isprime(int n)
{
	if (n < 2)
		return 0;

	int ret = 1;
	int i = 2;

	while (i * i <= n)
	{
		if (n % i == 0)
		{
			ret = 0;
			break;
		}
		else
			i++;
	}

	return ret;
}

int main(void)
{
	int m, n;
	long long sum = 0;
	int min = 0;
	scanf("%d", &m);
	scanf("%d", &n);

	for (int i = m; i <= n; i++)
	{
		if (isprime(i) == 1)
		{
			sum += i;
			if (min == 0)
			{
				min = i;
			}
		}
	}

	if (min == 0)
		printf("-1");
	else
	{
		printf("%lld\n", sum);
		printf("%d", min);
	}

	return 0;
}
