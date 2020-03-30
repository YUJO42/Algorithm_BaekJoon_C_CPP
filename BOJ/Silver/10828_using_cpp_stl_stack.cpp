/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10828_using_cpp_stl_stack.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:20:04 by yujo              #+#    #+#             */
/*   Updated: 2020/03/30 15:50:54 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	stack<int> my;

	while(N--)
	{
		string op;
		cin >> op;

		if (op[0] == 'p' && op[1] == 'u')
		{
			int num;
			cin >> num;
			my.push(num);
		}
		else if (op[0] == 'p')
		{
			if (my.empty())
				cout << "-1\n";
			else
			{
				cout << my.top() << '\n';
				my.pop();
			}
		}
		else if (op[0] == 'e')
		{
			if (my.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (op[0] == 's')
		{
			cout << my.size() << '\n';
		}
		else
		{
			if (my.empty())
				cout << "-1\n";
			else
				cout << my.top() << '\n';
		}
	}	

	return 0;
}
