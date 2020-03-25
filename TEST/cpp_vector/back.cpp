/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_back.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 14:20:35 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 14:24:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<int> myvector;

	myvector.push_back(10);

	for (int i = 0; i < myvector.size(); i++)
		printf("my vector [%d] : %d\n", i, myvector[i]);
	cout << "--DONE--" << '\n';

	while (myvector.back() != 0)
		myvector.push_back(myvector.back() - 1);

	for (int i = 0; i < myvector.size(); i++)
		printf("my vector [%d] : %d\n", i, myvector[i]);
}
