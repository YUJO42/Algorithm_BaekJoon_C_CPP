/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2010.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 18:29:34 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 18:37:07 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n, m;
	int plug = 1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		plug += m - 1;
	}
	printf("%d", plug);

	return 0;
}