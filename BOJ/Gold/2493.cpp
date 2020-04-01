/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2493.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 22:39:25 by yujo              #+#    #+#             */
/*   Updated: 2020/03/31 23:18:37 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	stack <pair<int, int>> stk;

	int h;
	for (int i = 1; i <= n; i++)
	{
		cin >> h;
		while (!stk.empty() && stk.top().first < h)
			stk.pop();
		if (stk.empty())
			cout << "0 ";
		else
			cout << stk.top().second << ' ';
		stk.push(make_pair(h, i));
	}

	return 0;
}
