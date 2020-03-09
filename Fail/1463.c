/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1463.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 21:38:55 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 22:19:01 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int count = 0;

	scanf("%d", &n);
	while (n != 1)
	{
		if (n % 3 == 0)
		{
			n /= 3;
			count++;
		}
		else if(n % 2 == 0 && (n - 1) % 3 != 0)
		{
			n /= 2;
			count++;
		}
		else
		{
			n -= 1;
			count++;
		}
	}

	printf("%d", count);

	return 0;
}