/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_back.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 16:26:02 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 16:31:34 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	list<int> my;

	int sum = 0;

	my.push_back (100);
	my.push_back (200);
	my.push_back (300);

	while (!my.empty())
	{
		sum += my.back();
		my.pop_back();
	}

	cout << "The elements of my list sum : " << sum << '\n';

	my.push_back (100);
	my.push_back (200);
	my.push_back (300);
	my.pop_back();
}
