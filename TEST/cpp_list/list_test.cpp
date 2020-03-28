/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 11:23:40 by yujo              #+#    #+#             */
/*   Updated: 2020/03/28 14:29:37 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

using namespace std;

/*
struct NODE
{
	struct NODE *prev, *next;
	int data;
};
*/

void traverse()
{
	int cur = nxt[0];
	while (cur != -1)
	{
		cout << dat[cur] << ' ';
		cur = nxt[cur];
	}
	cout << "\n\n";
}

int main(void)
{
	const int MX = 100005;
	int dat[MX], pre[MX], nxt[MX];
	int unused = 1;

	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);
}
