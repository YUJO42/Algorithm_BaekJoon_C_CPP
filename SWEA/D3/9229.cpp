/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9229.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 11:36:09 by yujo              #+#    #+#             */
/*   Updated: 2020/04/04 11:53:58 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cout << '#' << i << ' ';

		int n, m;
		cin >> n >> m;
		
		int arr[1001] = {0, };

		for (int j = 0; j < n; j++)
			cin >> arr[j];
		
		int ret = -1;
		for (int k = 0; k < n; k++)
		{
			for (int l = k + 1; l < n; l++)
			{
				if (arr[k] + arr[l] <= m)
				{
					ret = max(arr[k] + arr[l], ret);
					/*
					if (arr[k] + arr[l] > ret)
					{
						ret = arr[k] + arr[l];
					}
					*/
				}
			}
		}
		cout << ret << '\n';
	}

	return 0;
}
