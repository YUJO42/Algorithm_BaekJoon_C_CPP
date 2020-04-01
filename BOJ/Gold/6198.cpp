/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6198.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 09:20:03 by yujo              #+#    #+#             */
/*   Updated: 2020/04/01 10:51:18 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	stack <int> stk;
	int building[80005] = {0, };
	long long count = 0;

	for (int i = 0; i < N; i++)
		cin >> building[i];

	for (int i = 0; i < N; i++)
	{
		while (!stk.empty() && stk.top() <= building[i])
			stk.pop();
		stk.push(building[i]);
		count += stk.size() - 1;
	}

	cout << count;

	return 0;
}
