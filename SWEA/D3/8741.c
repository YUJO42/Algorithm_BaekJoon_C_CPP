/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8741.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 17:55:04 by yujo              #+#    #+#             */
/*   Updated: 2020/03/23 18:06:24 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	char str[1000];
	for (int i = 0; i < t; i++)
	{
		getchar();
		char ret[1000] = {0, };
		scanf("%[^\n]", str);
		
		ret[0] = str[0] - 'a' + 'A';
		int j = 1;
		int flag = 1;
		while(str[j])
		{
			if (str[j] == ' ')
			{
				ret[flag] = str[j + 1] - 'a' + 'A';
				flag++;
			}
			j++;
		}
		printf("#%d %s\n", i + 1, ret);
	}

	return 0;
}
