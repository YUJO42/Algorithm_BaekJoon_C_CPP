/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10845.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 14:24:24 by yujo              #+#    #+#             */
/*   Updated: 2020/04/01 14:41:17 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	queue<int> Q;

	while (n--)
	{
		string op;
		cin >> op;

		if (op == "push")
		{
			int num;
			cin >> num;
			Q.push(num);
		}
		else if (op == "pop")
		{
			if (Q.empty())
				cout << "-1\n";
			else
			{
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (op == "size")
		{
			cout << Q.size() << '\n';
		}
		else if (op == "empty")
		{
			if (Q.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (op == "front")
		{
			if (Q.empty())
				cout << "-1\n";
			else
				cout << Q.front() << '\n';
		}
		else if (op == "back")
		{
			if (Q.empty())
				cout << "-1\n";
			else
				cout << Q.back() << '\n';
		}
	}

	return 0;
}
