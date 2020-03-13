/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11365.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 19:03:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 19:27:13 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void swap(char *str)
{
	int len = 0;
	int l = 0;
	char temp;

	while (str[len] != '\0')
		len++;

	int r = len - 1;

	for (int i = 0; i < len / 2; i++)
	{
		temp = str[r];
		str[r] = str[l];
		str[l] = temp;
		l++;
		r--;
	}
	printf("%s\n", str);

	return ;
}

int main(void)
{
	char str[505];
	int i;
	while (1)
	{
		i = 1;
		scanf("%[^\n]s", str);
		getchar();

		if (str[0] == 'E' && str[1] == 'N' && str[2] == 'D' && str[3] == 0)
			break;
		
		swap(str);
	}


	return 0;
}
