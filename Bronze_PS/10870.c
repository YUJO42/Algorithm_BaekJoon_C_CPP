/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10870.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 01:53:27 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 02:07:57 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	re_fibo(int n, int a, int b)
{
	if (n == 0)
		return a;
	if (n == 1)
		return b;
	return (re_fibo(n - 1, b, a + b) );
}

int fibo(int i)
{
	if (i < 0)
		return -1;
	return (re_fibo(i, 0, 1));
}

int main(void)
{
	int n;
	int ret;

	scanf("%d", &n);
	printf("%d", fibo(n));

	return 0;
}
