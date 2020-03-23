/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5063.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 07:39:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/18 07:41:36 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int r, e, c;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &r, &e, &c);
		if (r + c < e)
			printf("advertise\n");
		else if (r + c > e)
			printf("do not advertise\n");
		else
			printf("does not matter\n");
	}

	return 0;
}
