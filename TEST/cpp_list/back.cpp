/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 13:47:17 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 13:49:18 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> my;

	my.push_back(10);

	while (my.back() != 0)
		my.push_back(my.back() - 1);

	cout << "my contains : ";

	for (list<int>::iterator it=my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
