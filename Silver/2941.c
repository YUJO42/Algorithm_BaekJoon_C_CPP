/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2941.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:43:12 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 20:56:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[105];
	int count = 0;

	scanf("%s", str);

	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '-')
			count++;
		if (str[i] == 'j')
		{
			if (str[i - 1] == 'n' || str[i - 1] == 'l')
				count++;
		}
		if (str[i] == '=')
		{
			if (str[i - 2] == 'd' && str[i - 1] == 'z')
				count += 2;
			else
				count++;
		}
	}
	
	printf("%ld", strlen(str) - count);

	return 0;
}
