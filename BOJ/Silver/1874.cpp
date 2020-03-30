/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1874.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:54:23 by yujo              #+#    #+#             */
/*   Updated: 2020/03/30 16:05:47 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int arr[100000] = {0, };
	stack<int> stk;
	vector<int> ret;

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int pos = 0;
	for (int i = 1; i <= n; i++)
	{
		stk.push(i);
		ret.push_back('+');
		while (!stk.empty() && stk.top() == arr[pos])
		{
			pos++;
			stk.pop();
			ret.push_back('-');
		}
	}
	if (!stk.empty()) 
		puts("NO");
	else 
		for (auto it : ret) 
			printf("%c\n", it);
	return 0;
}
