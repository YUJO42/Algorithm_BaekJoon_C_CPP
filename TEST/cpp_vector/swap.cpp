/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:41:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 09:44:46 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> foo (3, 100);
	vector<int> bar (5, 200);

	foo.swap(bar);

	cout << "foo contains : ";
	for (auto i = 0; i < foo.size(); i++)
		cout << ' ' << foo[i];
	cout << '\n';

	cout << "bar contains : ";
	for (auto i = 0; i < bar.size(); i++)
		cout << ' ' << bar[i];
	cout << '\n';

	return 0;
}
