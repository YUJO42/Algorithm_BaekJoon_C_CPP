/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1406.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 13:59:28 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 16:10:08 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input;
	cin >> input;

	list<char> L;
	for (int i = 0; i < input.size(); i++)
		L.push_back(input[i]);

	list<char>::iterator cursor = L.end();
	int N;
	cin >> N;
	while (N--)
	{
		char op;
		cin >> op;

		if (op == 'P')
		{
			char add;
			cin >> add;
			L.insert(cursor, add);
		}
		else if (op == 'L')
		{
			if (cursor != L.begin())
				cursor--;
		}
		else if (op == 'D')
		{
			if (cursor != L.end())
				cursor++;
		}
		else
		{
			if (cursor != L.begin())
			{
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto i = L.begin(); i != L.end(); i++)
		cout << *i;
	return 0;
}
