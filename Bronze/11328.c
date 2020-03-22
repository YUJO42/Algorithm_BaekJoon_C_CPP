/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11328.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 14:47:20 by yujo              #+#    #+#             */
/*   Updated: 2020/03/22 14:57:43 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	char str1[1005];
	char str2[1005];

	for (int i = 0; i < n; i++)
	{
		int alpha[26] = {0, };
		int check = 0;
		scanf("%s %s", str1, str2);
		for (int i = 0; str1[i]; i++)
			alpha[str1[i] - 'a'] += 1;
		for (int i = 0; str2[i]; i++)
			alpha[str2[i] - 'a'] -= 1;
		for (int i = 0; i < 26; i++)
		{
			if (alpha[i] != 0)
			{
				check = 1;
			}
		}
		if (check == 1)
			printf("Impossible\n");
		else
			printf("Possible\n");
	}

	return 0;
}
