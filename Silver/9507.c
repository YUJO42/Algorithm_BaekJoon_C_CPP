/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9507.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 09:58:03 by yujo              #+#    #+#             */
/*   Updated: 2020/03/16 10:16:03 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


long long arr[77] = {0, };

long long koong(int n)
{

	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	if (arr[n] != 0)
		return arr[n];
	arr[n] = koong(n - 1) + koong(n - 2) + koong(n - 3) + koong(n - 4);
	return
		arr[n];
}

int main(void)
{
	int t;
	int n;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%lld\n", koong(n));
	}

	return 0;
}
