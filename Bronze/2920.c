/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2920.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 20:43:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 21:23:40 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int arr[8];
	int check = 0;

	for (int i = 0; i < 8; i++)
		scanf("%d", &arr[i]);

	if (arr[0] == 1 && arr[7] == 8)
	{
		for (int i = 0; i < 7; i++)
		{
			if (arr[i] < arr[i + 1])
				check += 1;
		}
	}
	else if (arr[0] == 8 && arr[7] == 1)
	{
		for (int i = 0; i < 7; i++)
		{
			if (arr[i] > arr[i + 1])
				check -= 1;
		}
	}
	else
	{
		printf("mixed");
		return 0;
	}
	
	if (arr[0] == 1 && check == 7)
		printf("ascending");
	else if (arr[0] == 8 && check == -7)
		printf("descending");
	else
		printf("mixed");

	return 0;
}
