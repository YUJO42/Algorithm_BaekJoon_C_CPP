/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_front.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 13:10:43 by yujo              #+#    #+#             */
/*   Updated: 2020/03/27 13:18:35 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> my;
	my.push_back(100);
	my.push_back(200);
	my.push_back(300);

	cout << "Popping out the elements in my list : ";
	while (!my.empty())
	{
		cout << ' ' << my.front();
		my.pop_front();
	}

	cout << "\nFinal size of my list is : " << my.size() << '\n';

	return 0;
}
