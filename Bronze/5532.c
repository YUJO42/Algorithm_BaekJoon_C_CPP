/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5532.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 02:03:38 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 02:11:11 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int l, a, b, c, d;

	scanf("%d", &l);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	int g, s;

	if (a % c == 0)
		g = a / c;
	else
		g = (a / c) + 1;
	if (b % d == 0)
		s = b / d;
	else
		s = (b / d) + 1;

	int max = g > s ? g : s;

	printf("%d", l - max);

	return 0;
}
