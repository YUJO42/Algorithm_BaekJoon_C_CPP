/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   front.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 08:19:53 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 08:23:23 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> my;

	my.push_back(78);
	my.push_back(16);

	cout << "my front now :  " << my.front() << '\n';
	cout << "my back now :  " << my.back() << '\n';

	my.front() -= my.back();

	cout << "my front now :  " << my.front() << '\n';
	cout << "my back now :  " << my.back() << '\n';


	cout << "my my contains : ";
	for (int i = 0; i < my.size(); i++)
		cout << ' ' << my[i];

	return 0;
}
