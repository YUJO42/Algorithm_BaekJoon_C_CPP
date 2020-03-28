/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:04:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 16:10:24 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(void)
{
	list<int> my;
	list<int>::iterator it;

	for (int i = 1; i <= 5; i++)
		my.push_back(i);

	it = my.begin();
	it++;

	my.insert(it, 10);
	cout << "my list contains : ";
	for (it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	my.insert(it, 20);
	cout << "my list contains : ";
	for (it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	my.insert(it, 2, 30);
	cout << "my list contains : ";
	for (it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
