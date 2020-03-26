/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 08:13:13 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 08:18:59 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> myvector;

	for (int i = 1; i <= 10; i++)
		myvector.push_back(i);

	cout << "myvector contains : ";
	for (int i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	myvector.erase (myvector.begin() + 5);
	cout << "myvector contains : ";
	for (int i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	myvector.erase (myvector.begin(), myvector.begin() + 3);
	cout << "myvector contains : ";
	for (int i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';


	return 0;
}
