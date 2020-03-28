/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 13:59:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 14:01:16 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	int myint[] = {1, 2, 3, 4, 5};
	list<int> my(myint, myint + 5);

	cout << "mylist contains : ";
	for (list<int>::iterator it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;

	cout << '\n';

	return 0;
}
