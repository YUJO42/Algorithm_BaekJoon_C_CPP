/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9093.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 21:55:31 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 14:00:26 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void swap(char *str)
{
	int l = 0;
	int r = strlen(str) - 1;
	char temp;

	for (int i = 0; i < strlen(str) / 2; i++)
	{
		temp = str[l];
		str[l] = str[r];
		str[r] = temp;
		l++;
		r--;
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		getchar();
		char str[1005] = {0, };
		scanf("%[^\n]s", str);
		printf("%s\n", str);
	}

	return 0;
}
