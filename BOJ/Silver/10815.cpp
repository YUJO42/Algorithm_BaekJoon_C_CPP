/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10815.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:44:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 22:17:51 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>
#include <stdbool.h>

using namespace std;

int main(void)
{
	int n;
	
	scanf("%d", &n);

	int s_card[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &s_card[i]);

	sort(s_card, s_card + n);

	int m;

	scanf("%d", &m);

	int num;

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &num);


		bool ret = false;
		int left = 0;
		int right = n - 1;

		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (s_card[mid] == num)
			{
				ret = true;
				break;
			}
			if (s_card[mid] < num)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
		if (!ret)
			printf("0 ");
		else
			printf("1 ");
	}

	return 0;
}
