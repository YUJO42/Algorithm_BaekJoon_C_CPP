/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 14:10:34 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 14:14:50 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
	list<string>my;
	list<string>::iterator it;
	my.push_back("one");
	my.push_back("two");
	my.push_back("Three");

	my.sort();

	cout << "my list contains :";
	for (it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
