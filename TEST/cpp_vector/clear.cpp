/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:27:02 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 19:30:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> myvector;

	myvector.push_back (100);
	myvector.push_back (200);
	myvector.push_back (300);

	cout << "myvector contains : ";
	for (unsigned i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	myvector.clear();

	myvector.push_back (1100);
	myvector.push_back (2200);

	cout << "myvector contains : ";
	for (unsigned i = 0; i < myvector.size(); i++)
		cout << ' ' << myvector[i];
	cout << '\n';

	return 0;
}
