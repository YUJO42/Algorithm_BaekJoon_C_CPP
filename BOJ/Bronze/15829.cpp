/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15829.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 16:13:41 by yujo              #+#    #+#             */
/*   Updated: 2020/04/07 16:15:43 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int L;
unsigned long long n;
long long R = 1;
long long M = 1234567891;
char str[51];

int main(void)
{
	cin >> L >> str;

	for (int i = 0; i < L; i++)
	{
		n += (str[i] - 'a' + 1) * R;
		n %= M;
		R *= 31;
		R %= M;
	}

	cout << n;

	return 0;
}
