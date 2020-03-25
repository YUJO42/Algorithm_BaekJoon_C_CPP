/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 18:56:42 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 19:09:02 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> myvector;

	for (int i = 0; i < 100; i++)
		myvector.push_back(i);

	cout << "size : " << (int)myvector.size() << '\n';
	cout << "capacity : " << (int)myvector.capacity() << '\n';
	cout << "max_size : " << (int)myvector.max_size() << '\n';

	vector<char> ch_vector;
	vector<int> int_vector;

	cout << "ch_vector : " << ch_vector.max_size() << '\n';
	cout << "int_vector : " << (unsigned long long)int_vector.max_size() << '\n';

	return 0;
}
