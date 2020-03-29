/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5397.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 16:16:46 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 16:50:44 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N;
	cin >> N;

	while (N--)
	{
		string s;
		cin >> s;
		list<char> L;

		list<char>::iterator cursor = L.begin();

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '<')
			{
				if (cursor != L.begin())
					cursor--;
			}
			else if (s[i] == '>')
			{
				if (cursor != L.end())
					cursor++;
			}
			else if (s[i] == '-')
			{
				if (cursor != L.begin())
				{
					cursor--;
					cursor = L.erase(cursor);
				}
			}
			else
			{
				L.insert(cursor, s[i]);
			}
		}

		for (auto it = L.begin(); it != L.end(); it++)
			cout << *it;
		cout << '\n';
	}

	return 0;
}
