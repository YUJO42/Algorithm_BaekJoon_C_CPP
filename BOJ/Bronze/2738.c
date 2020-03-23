/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2738.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 21:52:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 22:16:48 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	double x, y; // y그램당 x원
	double price, gram;
	int n;

	scanf("%lf %lf", &x, &y);
	
	double ret = x / y;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf %lf", &price, &gram);
		if (ret > price / gram)
			ret = price / gram;
	}
	printf("%.2lf", ret * 1000);

	return 0;
}
