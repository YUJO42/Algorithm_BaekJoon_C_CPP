/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9093.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 21:55:31 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 17:26:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void swap(char *str)
{
	int l = 0;
	char temp;
	
	int i = 0;
	while (str[i] != ' ' && str[i] != '\0')
		i++;

	int r = i - 1;

	for (int j = 0; j < i / 2; j++)
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
		int j = 0;
		while (str[j])
		{
			while (str[j] != ' ' && str[j])
			{
				swap(&str[j]);
				while (str[j] != ' ' &&  str[j])
					j++;
			}
			j++;
		}
		printf("%s\n", str);
	}

	return 0;
}
