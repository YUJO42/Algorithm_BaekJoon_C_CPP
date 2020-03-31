/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4949.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 17:05:49 by yujo              #+#    #+#             */
/*   Updated: 2020/03/31 17:05:33 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;
/* try 1 - fail
 * 반례 : '}'하나만 입력되도 yes가 출력 됨.
int main(void)
{
	while (1)
	{
		char str[101];
		cin.getline(str, 101);

		if (!strcmp(str, "."))
			break;

		stack<char> stk;

		int flag = 0;

		for (int i = 0; i < strlen(str); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				stk.push(str[i]);
			else if (str[i] == ')')
			{
				if (!stk.empty() && stk.top() == '(')
					stk.pop();
				else
				{
					cout << "no\n";
					flag = 1;
					break;
				}
			}
			else if (str[i] == ']')
			{
				if (!stk.empty() && stk.top() == '[')
					stk.pop();
				else
				{
					cout << "no\n";
					flag = 1;
					break;
				}
			}
		}

		if (flag)
			continue;
		else
			cout << "yes\n";
	}

	return 0;
}
*/

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (1)
	{
		string str;
		getline(cin, str);
		stack<char> stk;

		if (str.length() == 1 && str[0] == '.')
			break;

		bool flag = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				stk.push(str[i]);
			else if (str[i] == ')')
			{
				if (!stk.empty() && stk.top() == '(')
					stk.pop();
				else
				{
					flag = false;
					break;
				}
			}
			else if (str[i] == ']')
			{
				if (!stk.empty() && stk.top() == '[')
					stk.pop();
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (flag && stk.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}


	return 0;
}
