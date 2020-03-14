/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1264.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 15:25:37 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 15:34:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char str[256];
	while (1)
	{
		int count = 0;
		scanf("%[^\n]s", str);
		getchar();
		
		if (*str == '#')
			break;
		int i = 0;
		while (str[i])
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
				count++;
			i++;
		}
		printf("%d\n", count);
	}

	return 0;
}
