/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1919.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 18:02:35 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 18:18:34 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string str1;
	string str2;

	cin >> str1 >> str2;

	vector<int> alpha1(26);
	vector<int> alpha2(26);

	for (int i = 0; i < str1.length(); i++)
		alpha1[str1[i] - 'a']++;
	for (int i = 0; i < str2.length(); i++)
		alpha2[str2[i] - 'a']++;

	/*
	for (int i = 0; i < 26; i++)
	{
		printf("alpha1[%d] : %d\n", i, alpha1[i]);
		printf("alpha2[%d] : %d\n", i, alpha2[i]);
	}
	*/
	int count = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alpha1[i] != alpha2[i])
		{
			int max = alpha1[i] >= alpha2[i] ? alpha1[i] : alpha2[i];
			int min = alpha1[i] <= alpha2[i] ? alpha1[i] : alpha2[i];
			count += (max - min);
		}
	}

	cout << count;

	return 0;
}
