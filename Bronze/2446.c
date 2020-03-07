/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2446.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 02:07:01 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 02:13:01 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int k = 0; k < 2 * (n - i) - 1; k++)
			printf("*");
		printf("\n");
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 2; j++)
			printf(" ");
		for (int k = 0; k < 2 * (i + 2) - 1; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}
