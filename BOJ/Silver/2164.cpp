/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2164.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 14:44:23 by yujo              #+#    #+#             */
/*   Updated: 2020/04/01 14:50:53 by yujo             ###   ########.fr       */
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

	queue <int> Q;

	for (int i = 1; i <= n; i++)
		Q.push(i);	

	while (1)
	{
		if (Q.size() == 1)
			break;
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}

	cout << Q.front();

	return 0;
}
