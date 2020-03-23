/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4504.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:40:34 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 11:43:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int m;

	scanf("%d", &n);

	while (1)
	{
		scanf("%d", &m);

		if (m == 0)
			break;
		if (m % n == 0)
			printf("%d is a multiple of %d.\n", m, n);
		else
			printf("%d is NOT a multiple of %d.\n", m, n);
	}
	return 0;
}
