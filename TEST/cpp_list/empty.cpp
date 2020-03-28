/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:04:28 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 14:07:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> my;
	int sum = 0;

	for (int i = 1; i <= 10; i++)
		my.push_back(i);

	while (!my.empty())
	{
		sum += my.front();
		my.pop_front();
	}

	cout << "total : " << sum << '\n';

	cout << "my list size : " << my.size();

	return 0;
}
