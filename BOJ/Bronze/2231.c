/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2231.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:42:57 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 12:52:44 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int sum;
	int part;

	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		sum = i;
		part = i;

		while (part)
		{
			sum += part % 10;
			part /= 10;
		}

		if (n == sum)
		{
			printf("%d\n", i);
			return 0;
		}
	}

	printf("0\n");

	return 0;
}
