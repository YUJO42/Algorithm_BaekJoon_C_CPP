/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1934.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 18:55:01 by yujo              #+#    #+#             */
/*   Updated: 2020/03/09 10:05:52 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// 유클리드 호제법

void check(int a, int b)
{
	int temp;

	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
}

int euclid(int a, int b)
{
	if (b == 0)
		return a;
	euclid(b, a % b);
}

int main(void)
{
	int t;
	int a, b, c;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		check(a, b);
		printf("%d\n", a * b / euclid(a, b));
	}

	return 0;
}
