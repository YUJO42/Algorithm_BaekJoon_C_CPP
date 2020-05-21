/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7568.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 22:12:08 by yujo              #+#    #+#             */
/*   Updated: 2020/05/21 13:09:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[51][2];

int main(void)
{
	int N; // number of person
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d %d", &arr[i][0], &arr[i][1]);

	for (int i = 0;  i < N; i++)
	{
		int cnt = 1;
		for (int j = 0; j < N; j++)
		{
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				cnt++;
		}
		printf("%d ", cnt);
	}

	return 0;
}
