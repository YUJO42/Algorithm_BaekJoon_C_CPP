/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9085.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:24:00 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 15:29:16 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int sum = 0;
		int num;
		cin >> n;

		for (int j = 0; j < n; j++)
		{
			cin >> num;
			sum += num;
		}
		cout << sum << '\n';
	}

	return 0;
}
