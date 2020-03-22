/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2480.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 12:36:53 by yujo              #+#    #+#             */
/*   Updated: 2020/03/22 12:44:25 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max = 0;
	int ret = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c && a == c)
	{
		printf("%d", 10000 + (a * 1000));
		return 0;
	}
	else if (a == b)
	{
		printf("%d", 1000 + (a * 100));
		return 0;
	}
	else if (a == c)
	{
		printf("%d", 1000 + (a * 100));
		return 0;
	}
	else if (b == c)
	{
		printf("%d", 1000 + (b * 100));
		return 0;
	}
	else
	{
		if (max < a)
			max = a;
		if (max < b)
			max = b;
		if (max < c)
			max = c;
	}
	printf("%d", max * 100);

	return 0;
}
