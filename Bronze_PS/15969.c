/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15969.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 15:09:20 by yujo              #+#    #+#             */
/*   Updated: 2020/03/03 15:14:10 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int	students[1001];
	int max = -1;
	int min = 1001;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &students[i]);
		if (min > students[i])
			min = students[i];
		if (max < students[i])
			max = students[i];
	}
	printf("%d", max - min);

	return 0;
}
