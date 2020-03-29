/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1158.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 13:39:41 by yujo              #+#    #+#             */
/*   Updated: 2020/03/29 14:11:17 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N, K;

	cin >> N >> K;
	
	list<int> people;
	vector<int> result;

	for (int i = 1; i <= N; i++)
		people.push_back(i);

	list<int>::iterator kill = people.begin();

	int n = N;

	while (n > 0)
	{
		for (int i = 0; i < K - 1; i++)
		{
			if (kill == people.end())
				kill = people.begin();
			kill++;
			if (kill == people.end())
				kill = people.begin();
		}
		result.push_back(*kill);
		kill = people.erase(kill);
		n--;
	}

	cout << "<";

	for (int i = 0; i < result.size() - 1; ++i)

		cout << result[i] << ", ";



	cout << result[result.size() - 1];

	cout << ">";

	return 0;
}
