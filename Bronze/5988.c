/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5988.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 22:18:15 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 00:16:51 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	char num[65];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", num);

		int check = 0;
		while (num[check])
			check++;
		if ((num[check - 1] - '0') % 2 != 0)
			printf("odd\n");
		else
			printf("even\n");
	}

	return 0;
}
