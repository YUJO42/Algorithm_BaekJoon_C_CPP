/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1850.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 02:19:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 02:29:27 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long long a, b;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	return b ? gcd(b, a % b) : a;
}

int main(void)
{
	scanf("%lld %lld", &a, &b);

	unsigned long long n = gcd(a, b);

	while (n--)
		printf("1");
	return 0;
}
