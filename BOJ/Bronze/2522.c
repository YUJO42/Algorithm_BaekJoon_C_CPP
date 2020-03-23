/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2522.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 18:10:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 18:18:15 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			printf(" ");
		for (int k = 0; k < i + 1; k++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int k = i; k < n; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}
