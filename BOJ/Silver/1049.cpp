/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1049.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 15:26:23 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 15:42:50 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;

	int set[55] = {0, };
	int one[55] = {0, };

	for (int i = 0; i < M; i++)
		cin >> set[i] >> one[i];
	sort(set, set + M);
	sort(one, one + M);

	int s = set[0];
	int o = one[0];
	int sum = 0;
	int num = N;

	while (num > 0)
	{
		if (num >= 6)
		{
			if (s > o * 6)
			{
				sum += o * 6;
				num -= 6;
			}
			else
			{
				sum += s;
				num -= 6;
			}
		}
		else
		{
			if (s > o * num)
			{
				sum += o * num;
				num -= num;
			}
			else
			{
				sum += s;
				num -= 6;
			}
		}
	}

	cout << sum;

	return 0;
}
