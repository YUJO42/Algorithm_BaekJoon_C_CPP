/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10808.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 01:32:05 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 01:40:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[105];
	char check[26];

	for (int i = 0; i < 26; i++)
		check[i] = 0;

	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++)
	{
		check[str[i] - 'a'] += 1;
	}
	for (int i = 0; i < 25; i++)
		printf("%d ", check[i]);
	printf("%d", check[25]);

	return 0;
}
