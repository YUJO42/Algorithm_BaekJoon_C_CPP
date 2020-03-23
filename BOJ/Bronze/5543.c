/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5543.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 02:10:15 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 02:17:44 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int bug[3];
	int drink[2];
	int min_bug = 2001;
	int min_drink = 2001;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &bug[i]);
		if (min_bug > bug[i])
			min_bug = bug[i];
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &drink[i]);
		if (min_drink > drink[i])
			min_drink = drink[i];
	}
	printf("%d", min_bug + min_drink - 50);

	return 0;
}
