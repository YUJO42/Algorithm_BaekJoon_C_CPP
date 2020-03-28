/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advance.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 14:11:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 14:17:15 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr;
	vector<int>::iterator it;

	arr.push_back (13);
	arr.push_back (2);
	arr.push_back (3);

	it = arr.begin();
	int n;
	n = 0;

	cout << "my arr contains : ";
	for (int i = 0; i < arr.size(); i++)
		cout << ' ' << arr[i];
	cout << '\n';

	cout << "advance(it, 0) is : " << *it;
	advance(it, 0);
	cout << '\n';

	advance(it, 1);
	cout << "advance(it, 1) is : " << *it;
	cout << '\n';

	advance(it, 1);
	cout << "advance(it, 1) is : " << *it;
	cout << '\n';

	return 0;
}
