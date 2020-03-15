/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1920.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 22:22:12 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 22:27:50 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;

	scanf("%d", &n);

	long long arr[n];

	for (int i = 0; i < n; i++)
		scanf("%lld", &arr[i]);

	sort(arr, arr + n);

	int m;

	scanf("%d", &m);

	int num;

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &num);
		int ret = 0;
		int left = 0;
		int right = n + 1;

		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] == num)
			{
				ret = 1;
				break;
			}
			if (arr[mid] < num)
				left = mid + 1;
			else
				right = mid - 1;
		}
		printf("%d\n", ret);
	}

	return 0;
}
