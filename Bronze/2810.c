/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2810.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 16:02:34 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 16:20:40 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	char arr[100];

	scanf("%d", &n);
	scanf("%s", arr);

	int i = 0;
	int count = 1;
	
	while (arr[i])
	{
		if (arr[i] == 'S')
			count++;
		if (arr[i] == 'L')
		{
			count++;
			i++;
		}
		i++;
	}
		
	printf("%d", n < count ?  n : count);

	return 0;
}
