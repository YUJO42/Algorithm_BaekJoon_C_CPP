/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1316.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 10:01:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 22:50:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;

	//freopen("input.txt", "r", stdin);
	scanf("%d", &n);
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int check[26] = {0, };
		char str[101] = {0, };
			
		scanf("%s", str);

		for (int j = 0; str[j];)
		{
		check[str[j] - 'a'] += 1;
		char chk = str[j];
		if (chk == str[j + 1])
			while (chk == str[j])
				j++;
		else
			j++;
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

