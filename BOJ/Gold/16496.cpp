/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16496.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 16:55:38 by yujo              #+#    #+#             */
/*   Updated: 2020/03/30 13:30:06 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int N; cin >> N;

	string A[1000];
	string result;
	bool flag = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] != "0")
			flag = 1;
	}

	if (!flag)
	{
		cout << "0\n";
		return 0;
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = N - 2; j >= i; j--)
		{
			if (A[j + 1] + A[j] > A[j] + A[j + 1])
				swap(A[j], A[j + 1]);
		}
	}
	for (int i = 0; i < N; i++)
		result += A[i];
	cout << result << '\n';
}
