/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5585.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 13:56:26 by yujo              #+#    #+#             */
/*   Updated: 2020/03/10 14:00:47 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int money = 1000;
	int count = 0;

	scanf("%d", &n);
	money -= n;

	while (money)
	{
		if (money >= 500)
			money -= 500;
		else if (money >= 100)
			money -= 100;
		else if (money >= 50)
			money -= 50;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else
			money -= 1;
		count++;
	}

	printf("%d", count);

	return 0;
}
