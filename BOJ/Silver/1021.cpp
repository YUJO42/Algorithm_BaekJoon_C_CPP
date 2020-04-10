/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1021.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 17:33:56 by yujo              #+#    #+#             */
/*   Updated: 2020/04/10 18:57:25 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int N, M;
deque<int> dq;

int main(void)
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		dq.push_back(i);

	int count = 0;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;

		int cur = 1;
		for (deque<int>::iterator it = dq.begin(); it < dq.end(); it++)
		{
			if (*it == num)
				break;
			cur++;
		}

		int left = cur - 1;
		int right = dq.size() - cur + 1;

		if (left < right)
		{
			for (int j = 1; j <= left; j++)
			{
				int n = dq.front();
				dq.pop_front();
				dq.push_back(n);
				count++;
			}
			dq.pop_front();
		}
		else
		{
			for (int j = 1; j <= right; j++)
			{
				int n = dq.back();
				dq.pop_back();
				dq.push_front(n);
				count++;
			}
			dq.pop_front();
		}
	}

	cout << count;

	return 0;
}
