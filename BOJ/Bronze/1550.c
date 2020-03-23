/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1550.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 15:54:35 by yujo              #+#    #+#             */
/*   Updated: 2020/03/16 16:11:56 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[6];
	long long sum = 0;
	long long temp = 1;

	scanf("%s", c);

	for (int i = strlen(c) - 1; i >= 0; i--)
	{
		if (c[i] == 'A')
			sum += 10 * temp;
		else if (c[i] == 'B')
			sum += 11 * temp;
		else if (c[i] == 'C')
			sum += 12 * temp;
		else if (c[i] == 'D')
			sum += 13 * temp;
		else if (c[i] == 'E')
			sum += 14 * temp;
		else if (c[i] == 'F')
			sum += 15 * temp;
		else
			sum += (c[i] - '0') * temp;
		temp *= 16;
	}
	printf("%lld", sum);
}
