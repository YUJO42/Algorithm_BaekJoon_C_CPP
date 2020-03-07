/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9325.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 22:42:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 22:47:43 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;
	int s;
	int n;
	int q, p;
	int ret;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &s);
		ret = s;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d %d", &q, &p);
			ret += (q * p);
		}
		printf("%d\n", ret);
	}


	return 0;
}
