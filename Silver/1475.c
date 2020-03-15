/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1475.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 09:53:58 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 11:37:45 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char str[1000005];
	int set = 0;
	int num[10] = {0, };
	int max = 1;

	scanf("%s", str);

	for (int i = 0; str[i]; i++)
		num[str[i] - '0'] += 1; 

	num[9] += num[6];
	num[6] = 0;

	if (num[9] % 2 == 0)
	{
		if (max < num[9] / 2)
			max = num[9] / 2;
	}

	if (num[9] % 2 == 1)
	{
		if (max < num[9] / 2 + 1)
			max = num[9] / 2 + 1;
	}

	for (int i = 0; i < 9; i++)
	{
		if (max < num[i])
			max = num[i];
	}

	printf("%d", set + max);

	return 0;
}
