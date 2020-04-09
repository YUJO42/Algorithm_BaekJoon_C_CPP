/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14501.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 09:47:00 by yujo              #+#    #+#             */
/*   Updated: 2020/04/08 21:49:55 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int dp[25];

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int t, p;
		scanf("%d %d", &t, &p);

		if (dp[i] > dp[i + 1])
			dp[i + 1] = dp[i];

		if (dp[i + t] < dp[i] + p)
			dp[i + t] = dp[i] + p; 
	}

	printf("%d", dp[n]);

	return 0;
}
