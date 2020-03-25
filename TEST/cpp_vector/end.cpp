/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vetcot_end.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 15:00:43 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 15:02:59 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<int> myvector;

	for (int i = 1; i <= 5; i++)
		myvector.push_back(i);

	cout << "myvector contains : ";
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
