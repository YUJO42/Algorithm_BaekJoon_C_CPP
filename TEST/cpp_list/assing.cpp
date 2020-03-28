/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assing.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 11:28:52 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 11:31:29 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> first;
	list<int> second;

	first.assign (7, 100);

	second.assign (first.begin(), first.end());

	int myint[] = {1776, 7, 4};
	first.assign (myint, myint + 3);

	cout << "Size of first : " << int (first.size()) << '\n';
	cout << "Size of second : " << int (second.size()) << '\n';

	return 0;
}
