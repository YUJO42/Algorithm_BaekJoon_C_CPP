/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1904.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 15:53:08 by yujo              #+#    #+#             */
/*   Updated: 2020/04/14 16:12:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int dp(int n)
{
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;

	if (arr[n])
		return arr[n];
	else
		return arr[n] = (dp(n - 1) + dp(n - 2)) % 15746;
}

int main(void)
{
	int n;
	cin >> n;
	cout << dp(n);

	return 0;
}
