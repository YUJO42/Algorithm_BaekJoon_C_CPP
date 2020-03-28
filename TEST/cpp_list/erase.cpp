/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:07:56 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 14:20:58 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> my;
	list<int>::iterator it1, it2;

	for (int i = 1; i <= 10; i++)
		my.push_back(i * 10);

	it1 = it2 = my.begin();
	advance (it2, 6);
	it1++;

	it1 = my.erase(it1);

	it2 = my.erase(it2);

	it1++;
	it2--;

	my.erase(it1, it2);

	cout << "my list contains : ";
	for (it1 = my.begin(); it1 != my.end(); it1++)
		cout << ' ' << *it1;
	cout << '\n';

	

	return 0;
}
