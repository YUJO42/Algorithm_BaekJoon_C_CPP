/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10866.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 10:14:42 by yujo              #+#    #+#             */
/*   Updated: 2020/04/02 10:46:31 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	//cin.tie(0);

	int n;
	cin >> n;
	deque<int> D;

	while (n--)
	{
		string op;
		cin >> op;

		if (op == "push_front")
		{
			int num;
			cin >> num;

			D.push_front(num);
		}
		else if (op == "push_back")
		{
			int num;
			cin >> num;

			D.push_back(num);
		}
		else if (op == "pop_front")
		{
			if (D.empty())
				cout << "-1\n";
			else
			{
				cout << D.front() << '\n';
				D.pop_front();
			}
		}
		else if (op == "pop_back")
		{
			if (D.empty())
				cout << "-1\n";
			else
			{
				cout << D.back() << '\n';
				D.pop_back();
			}
		}
		else if (op == "size")
		{
			cout << D.size() << '\n'; 
		}
		else if (op == "empty")
		{
			if (D.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (op == "front")
		{
			if (D.empty())
				cout << "-1\n";
			else
				cout << D.front() << '\n';
		}
		else if (op == "back")
		{
			if (D.empty())
				cout << "-1\n";
			else
				cout << D.back() << '\n';
		}
	}

	return 0;
}
