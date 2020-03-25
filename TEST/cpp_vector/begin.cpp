/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_begin.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 14:25:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 14:33:36 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<int> myvector;

	for (int i = 0; i <= 5; i++)
		myvector.push_back(i);
	for (int i = 0; i < myvector.size(); i++)
		printf("myvector[%d] : %d\n", i, myvector[i]);
	cout << "--DONE--" << '\n';

	cout << "myvecotr contains print by iterator : ";
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
		cout << ' ' << *it;
	cout << '\n';

	return 0;
}
