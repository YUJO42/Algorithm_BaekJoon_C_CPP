/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10809.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 14:14:31 by yujo              #+#    #+#             */
/*   Updated: 2020/04/06 14:20:15 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	int arr[26];

	for (int i = 0; i < 26; i++)
		arr[i] = -1;

	for (int i = 0; str[i]; i++)
	{
		if (arr[str[i] - 'a'] == -1)
			arr[str[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << arr[i] << ' ';

	return 0;
}
