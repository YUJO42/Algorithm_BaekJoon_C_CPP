/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbegin.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:18:18 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 19:23:52 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> myvector = {10, 20, 30, 40, 50};

	cout << "myvector contains : ";

	for (auto it = myvector.cbegin(); it != myvector.cend(); it++)
		cout << ' ' << *it;
		cout << '\n';

	return 0;
}
