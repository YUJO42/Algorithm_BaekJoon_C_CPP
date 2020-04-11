/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4999.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 21:50:55 by yujo              #+#    #+#             */
/*   Updated: 2020/04/11 22:02:04 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	char buf[1001];

	int a = 0;
	int b = 0;

	scanf("%s", buf);
	while (buf[++a]);
	scanf("%s", buf);
	while (buf[++b]);

	a >= b ? printf("go") : printf("no");

	return 0;
}
