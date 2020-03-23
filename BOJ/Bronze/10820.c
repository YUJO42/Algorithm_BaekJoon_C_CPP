/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10820.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 22:01:59 by yujo              #+#    #+#             */
/*   Updated: 2020/03/12 23:15:18 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	while (EOF)
	{
		char str[105] = {0, };

		scanf("%[^\n]", str);
		getchar();

		if (strlen(str) == 0)
			break;
		int a = 0, A = 0, num = 0, space = 0;
		int end = 1;

		while (end == 1)
		{
			for (int i = 0; str[i]; i++)
			{
				if ('a' <= str[i] && str[i] <= 'z')
					a++;
				else if ('A' <= str[i] && str[i] <= 'Z')
					A++;
				else if ('0' <= str[i] && str[i] <= '9')
					num++;
				else if (str[i] == ' ')
					space++;
			}
			printf("%d %d %d %d\n", a, A, num, space);
			end -= 1;
		}
	}

	return 0;
}
