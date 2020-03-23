/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1065.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:12:23 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 22:10:08 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	hansoo(int n)
{
	int count = 0;
	int a, b, c;

	if (n < 100)
		return (n);
	else
		count = 99;
	for (int i = 100; i <= n; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if ((c - b) == (b - a))
			count++;
	}
	return (count);
}

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d", hansoo(n));
}
