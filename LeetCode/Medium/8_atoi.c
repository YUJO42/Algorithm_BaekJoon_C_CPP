/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 21:17:56 by yujo              #+#    #+#             */
/*   Updated: 2020/05/14 09:30:28 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int myAtoi(char *str)
{
	int i = 0;
	long long sign = 1;
	long long result = 0;

	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		rusilt += str[i] - '0';
		if (result > 2147483647)
		{
			if (sign == 1)
				return 2147483647;
			else
				return -2147483647;
		}
		i++;
	}
	return (result * sign);
}
