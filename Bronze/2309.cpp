/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2309.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 13:55:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/16 14:12:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[9] = {0, };
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				if (sum == 100)
					break;
				arr[i] = 101;
				arr[j] = 101;
				sum = 100;
			}
		}
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 7; i++)
		printf("%d\n", arr[i]);

	return 0;
}
