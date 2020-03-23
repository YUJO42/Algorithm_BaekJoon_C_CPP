/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13458.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 14:42:03 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 15:23:16 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	// 시험장의 개수 n
	// 각 시험장의 응시자 수 a[i]...a[n]
	// 총감독관 감시 가능 b
	// 부감독관 감시 가능 c
	int n;
	int b, c;
	long long count = 0;

	scanf("%d", &n);

	int a[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d %d", &b, &c);

	for (int i = 0; i < n; i++)
	{
		a[i] -= b;
		count++;
		if (a[i] > 0)
		{
			if (a[i] % c == 0)
			{
				count += (a[i] / c);
			}
			else
			{
				count += (a[i] / c) + 1;
			}
		}
	}

	printf("%lld", count);


	return 0;
}
