/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2748.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 14:50:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 15:01:27 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


long long dp_fibo(int n)
{
	long long arr[99];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 0; i < n; i++)
		arr[i + 2] = arr[i + 1] + arr[i];

	return arr[n];
}

int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%lld", dp_fibo(n));

	return 0;
}
