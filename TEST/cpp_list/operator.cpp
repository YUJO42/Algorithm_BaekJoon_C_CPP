/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:22:42 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 16:25:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	list<int> first(3);
	list<int> second(3);

	second = first;
	//first = list<int>();

	cout << "size of first : " << int(first.size()) << '\n';
	cout << "size of second : " << int(second.size()) << '\n';

	return 0;
}
