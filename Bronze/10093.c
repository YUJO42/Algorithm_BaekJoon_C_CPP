/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10093.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 18:21:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/19 18:36:27 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	unsigned long long a, b;

	scanf("%lld %lld", &a, &b);
	if (a > b)
	{
		unsigned long long temp;
		temp = a;
		a = b;
		b = temp;
	}
	if (a == b)
	{
		printf("0");
		return 0;
	}
	printf("%lld\n", b - a - 1);
	for (unsigned long long i = a + 1; i < b; i++)
		printf("%lld ", i);
	return 0;
}
