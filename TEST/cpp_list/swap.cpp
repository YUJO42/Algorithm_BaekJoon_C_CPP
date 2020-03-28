/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 14:15:06 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 14:16:59 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	list<int> first (3, 100);
	list<int> second (5, 200);

	first.swap(second);

	cout << "first contains :";
	for (list<int>::iterator it = first.begin(); it != first.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	cout << "second contains :";
	for (list<int>::iterator it = second.begin(); it != second.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
