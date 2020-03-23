/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10886.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 17:32:17 by yujo              #+#    #+#             */
/*   Updated: 2020/03/09 17:40:19 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int m;
	int cnt_zero = 0;
	int cnt_one = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m == 0)
			cnt_zero += 1;
		else if (m == 1)
			cnt_one += 1;
	}

	if (cnt_zero > cnt_one)
		printf("Junhee is not cute!");
	else if (cnt_zero < cnt_one)
		printf("Junhee is cute!");


	return 0;
}
