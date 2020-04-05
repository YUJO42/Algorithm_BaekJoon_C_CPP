/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1436.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 13:30:14 by yujo              #+#    #+#             */
/*   Updated: 2020/04/05 13:43:23 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int i, tmp, chk, cnt;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	while (++i)
	{
		tmp = i;
		chk = 0;
		while (tmp)
		{
			if (tmp % 1000 == 666)
				chk = 1;
			tmp /= 10;
		}

		if (chk)
		{
			cnt++;
			if (cnt == n)
				break;
		}
	}

	cout << i;

	return 0;
}
