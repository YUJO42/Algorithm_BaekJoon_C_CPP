/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2960.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:29:53 by yujo              #+#    #+#             */
/*   Updated: 2020/04/06 14:34:33 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

bool  prime[1001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	int count = 0;

	for (int i = 2; i <= N; i++)
	{
		for (int j = i; j <= N; j += i)
		{
			if (!prime[j])
			{
				prime[j] = true;
				if (++count == K)
				{
					cout << j;
					break;
				}
			}
		}
	}

	return 0;
}
