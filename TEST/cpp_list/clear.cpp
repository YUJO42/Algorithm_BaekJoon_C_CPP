/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:01:42 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 14:04:01 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> my;
	list<int>::iterator it;

	my.push_back(100);
	my.push_back(200);
	my.push_back(300);

	cout << "mylist contains : ";
	for (it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	my.clear();
	my.push_back(1000);
	my.push_back(2000);

	cout << "mylist contains : ";
	for (it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
