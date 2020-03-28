/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:11:51 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 16:22:09 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

bool mycmp(double first, double second)
{
	return (int(first) < int(second));
}

int main(void)
{
	list<double> first, second;

	first.push_back (3.1);
    first.push_back (2.2);
    first.push_back (2.9);

    second.push_back (3.7);
    second.push_back (7.1);
    second.push_back (1.4);

    first.sort();
    second.sort();

	first.merge(second);

	second.push_back (2.1);

	first.merge(second, mycmp);

	cout << "first contains : ";
	for (list<double>::iterator it = first.begin(); it != first.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	list<double>::iterator it = second.begin();
	cout << *it;

	return 0;
}
