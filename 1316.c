/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1316.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:01:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 16:38:09 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
	int n;
	int count = 0;
	char str[101];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int check[26] = {0, };
		
		scanf("%s", str);

		for (int j = 0; str[j]; j++)
		{
			if (check[str[j] - 'a'] == 1)
			{
				check[str[j] - 'a'] += 1;
				//char chk = str[j];
				//while (chk != str[j])
				//	j++;
			}
			else if (check[str[j] - 'a'] == 0)
			{
				check[str[j] - 'a'] += 1;
				char chk = str[j];
				while (chk != str[j])
					j++;
			}
		}
		count += 1;
		for (int k = 0; k < 26; k++)
		{
			if (check[k] > 1)
			{
				count -= 1;
				break;
			}
		}
	}

	printf("%d", count);

	return 0;
}

