/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1011.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 20:03:39 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 22:10:53 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;

	scanf("%d", &t);

	while (t--)
	{
		int x, y;
		int count = 1;
		scanf("%d %d", &x, &y);

		unsigned int len = y - x;
		unsigned int pos = 1;

		for (int i = 2; pos < len; i++)
		{
			pos += i / 2;
			count++;
		}
		if (pos > len)
			count--;
		printf("%d\n", count);
	}

	return 0;
}
