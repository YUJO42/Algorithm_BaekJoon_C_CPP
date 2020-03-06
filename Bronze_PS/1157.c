/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1157.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 08:54:13 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 11:39:47 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char	str[1000005];
	int		check[256];
	int		res = 0;
	char	ret;

	for (int i = 0; i < 256; i++)
		check[i] = 0;
	scanf("%s", str);
	for	(int i = 0; str[i]; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z')
			check[str[i] - 'a' + 'A'] += 1;
		else if ('A' <= str[i] && str[i] <= 'Z')
			check[str[i]] += 1;
	}
	for (int i = 0; i < 256; i++)
	{
		if (res == check[i])
			ret = '?';
		else if (res < check[i])
		{
			res = check[i];
			ret = i;
		}
	}
	printf("%c\n", ret);

	return 0;
}
