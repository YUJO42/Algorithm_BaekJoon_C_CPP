/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_front.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 14:07:15 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 14:09:19 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	list<int> my (2, 100);
	my.push_front(2);
	my.push_front(3);

	cout << "mylist contains :";
	for (list<int>::iterator it = my.begin(); it != my.end(); it++)
		cout << ' ' << *it;

	return 0;
}
