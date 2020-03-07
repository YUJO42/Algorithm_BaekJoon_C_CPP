/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2193.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:05:27 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 15:21:59 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long long pinary(int n)
{
	unsigned long long arr[91];

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
	printf("%lld", pinary(n));
	
	return 0;
}
