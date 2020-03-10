/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15953.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 17:56:31 by yujo              #+#    #+#             */
/*   Updated: 2020/03/10 18:13:05 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;
	int a, b;

	freopen("input.txt", "r", stdin);

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);

		int sum = 0;

		if (a == 1)
			sum += 5000000;
		else if (2 <= a && a <= 3)
			sum += 3000000;
		else if (4 <= a && a <= 6)
			sum += 2000000;
		else if (7 <= a && a <= 10)
			sum += 500000;
		else if (11 <= a && a <= 15)
			sum += 300000;
		else if (16 <= a && a <= 21)
			sum += 100000;

		if (b == 1)
			sum += 5120000;
		else if (2 <= b && b <= 3)
			sum += 2560000;
		else if (4 <= b && b <= 7)
			sum += 1280000;
		else if (8 <= b && b <= 15)
			sum += 640000;
		else if (16 <= b && b <= 31)
			sum += 320000;

		printf("%d\n", sum);
	}

	return 0;
}
