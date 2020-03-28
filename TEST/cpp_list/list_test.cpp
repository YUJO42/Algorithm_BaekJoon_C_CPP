/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 11:23:40 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 11:28:48 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>

/*
struct NODE
{
	struct NODE *prev, *next;
	int data;
};
*/

int main(void)
{
	const int MX = 100005;
	int dat[MX], pre[MX], nxt[MX];
	int unused = 1;

	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);
}
