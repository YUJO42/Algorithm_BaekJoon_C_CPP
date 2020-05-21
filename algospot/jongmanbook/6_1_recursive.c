/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 11:46:47 by yujo              #+#    #+#             */
/*   Updated: 2020/05/20 11:48:31 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sum(int n)
{
	int ret = 0;
	for (int i = 1; i <= n; i++)
		ret += i;
	return ret;
}

int recursiveSum(int n)
{
	if (n == 1)
		return 1;
	return n + recursiveSum(n - 1);
}


int main(void)
{
	printf("sum : %d\n", sum(10));
	printf("recursive sum : %d\n", recursiveSum(10));
}
