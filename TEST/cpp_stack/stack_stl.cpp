/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_stl.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:16:31 by yujo              #+#    #+#             */
/*   Updated: 2020/03/30 15:19:30 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	stack<int> S;
	S.push(10);
	S.push(20);
	S.push(30);
	cout << S.size() << '\n';

	if (S.empty())
		cout << "S is empty\n";
	else
		cout << "S is not empty\n";
	S.pop();
	cout << S.top() << '\n';
	S.pop();
	cout << S.top() << '\n';
	S.pop();
	if (S.empty())
		cout << " S is empty\n";
	cout << S.top() << '\n';

	return 0;
}
