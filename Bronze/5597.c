/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5597.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:05:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/09 16:51:03 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int student[3222] = {0, };
	int check;
	int ret[22222] = {0, };

	//freopen("input.txt", "r", stdin);
	for (int i = 1; i <= 28; i++)
	{
		scanf("%d", &check);
		student[check] = 1;
	}

	for (int i = 1; i < 31; i++)
	{
		if (student[i] == 0 && ret[0] != 0)
			ret[1] = i;
		else if (student[i] == 0)
			ret[0] = i;
	}

	printf("%d\n", ret[0] < ret[1] ? ret[0] : ret[1]);
	printf("%d", ret[0] > ret[1] ? ret[0] : ret[1]);

	return 0;
}
