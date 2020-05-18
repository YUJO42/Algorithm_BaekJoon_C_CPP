/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_Reverse_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:39:19 by yujo              #+#    #+#             */
/*   Updated: 2020/05/17 17:50:15 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int reverse(int x)
{
	int			i = 0;
	long long	sign = 1;
	long long	result = 0;

	if (x == -2147483648)
		return 0;
	if (x < 0)
	{
		sign *= -1;
		x *= -1;
	}
	while (x > 0)
	{
		result *= 10;
		result += (x % 10);
		x /= 10;
	}

	result *= sign;

	if (result > 2147483647 || -2147483648 > result)
		return 0;
	return result;
}

int main(void)
{
	int test1 = 123;
	int test2 = -123;
	int test3 = 120;

	printf("test1 output : 123, my output: %d\n", reverse(test1));
	printf("test2 output : -321, my output: %d\n", reverse(test2));
	printf("test3 output : 21, my output: %d\n", reverse(test3));

	return 0;
}
