/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13458.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 20:14:21 by yujo              #+#    #+#             */
/*   Updated: 2020/04/09 21:09:43 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, a, b;
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	cin >> a >> b;
	long long ret = 0;
	for (int i = 1; i <= N; i++)
	{
		arr[i] -= a;
		ret++;
		if (arr[i] > 0)
		{
			ret += arr[i] / b;
			ret += arr[i] % b != 0 ? 1 : 0;
		}
	}
	cout << ret << '\n';

	return 0;
}
