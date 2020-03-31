/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9012.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 17:08:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/31 17:40:24 by yujo             ###   ########.fr       */
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

	while (n--)
	{
		string str;
		cin >> str;

		int cnt = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
				cnt++;
			else
				cnt--;
			if (cnt < 0)
				break;
		}
		cout << (cnt == 0 ? "YES\n" : "NO\n");
	}

	return 0;
}
