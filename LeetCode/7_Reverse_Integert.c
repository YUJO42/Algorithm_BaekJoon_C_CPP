/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_Reverse_Integert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:47:23 by yujo              #+#    #+#             */
/*   Updated: 2020/05/15 15:56:31 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int reverse(int x)
{
	long long result = 0;
	long long sign = 1;

	if (x <= -2147483648 || x >= 2147473648)
		return 0;
	else if (x < 0)
	{
		x *= -1;
		sign *= -1;
	}

	while (x > 0)
	{
		result *= 10;
		result += x % 10;
		x /= 10;
	}

	return result * sign;
}

#include <stdio.h>

int main(void)
{
	int a = 123;
	int b = -123;
	int c = 120;

	printf("test1 : %d\n", reverse(a));
	printf("test2 : %d\n", reverse(b));
	printf("test3 : %d\n", reverse(c));
}
