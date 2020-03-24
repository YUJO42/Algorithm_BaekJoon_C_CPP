/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_test.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 16:41:16 by yujo              #+#    #+#             */
/*   Updated: 2020/03/24 16:49:10 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	vector<int> v1(3, 5);
	cout << "v1 : " << v1.size() << '\n';
	v1.push_back(7);
	cout << "v1 : " << v1.size() << '\n';

	vector<int> v2(2);
	v2.insert(v2.begin()+1, 3);

	vector<int> v3 = {1, 2, 3, 4};
	v3.erase(v3.begin()+2);

	vector<int> v4;
	v4 = v3;
	cout << "v4 : " << v4[0] << v4[1] << v4[2] << '\n';
	v4.pop_back();
	v4.clear();
}
