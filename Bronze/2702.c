/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2702.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:31:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 16:12:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int min(int a, int b)
{
	int i;

	i = a < b ? a : b;
	
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		{
			return (i);
			break;
		}
		i++;
	}
}

int max(int a, int b)
{
	int i;

	i = a < b ? a : b;
	
	while (1)
	{
		if (a % i == 0 && b % i == 0)
		{
			return (i);
			break;
		}
		i--;
	}
}

int main(void)
{
	int n;
	int a, b;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d %d\n", min(a, b), max(a, b)); 
	}

	return 0;
}
