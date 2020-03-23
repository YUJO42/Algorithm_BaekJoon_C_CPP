/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9317.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 17:20:33 by yujo              #+#    #+#             */
/*   Updated: 2020/03/23 17:38:41 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n;
		int count = 0;
		
		scanf("%d", &n);

		char str1[n + 1];
		char str2[n + 1];
		scanf("%s", str1);
		scanf("%s", str2);

		for (int j = 0; j < n; j++)
		{
			if (str1[j] == str2[j])
				count++;
		}
		printf("#%d %d\n", i + 1, count);
	}

	return 0;
}
