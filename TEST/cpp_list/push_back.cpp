/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 14:01:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 14:06:44 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	list<int> my;
	int myint;

	cout << "Please eneter some int (enter 0 to end) : \n";

	do {
		cin >> myint;
		my.push_back(myint);
	}while (myint);

	cout << "my list stroes : " << my.size() << " numbers.\n";

	cout << "my list contains : ";
	for (list<int>::iterator it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	return 0;
}
