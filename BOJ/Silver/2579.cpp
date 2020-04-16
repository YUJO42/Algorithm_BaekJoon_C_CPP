/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2579.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 10:58:55 by yujo              #+#    #+#             */
/*   Updated: 2020/04/16 11:05:27 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int N;
int step[301];
int sum[301];

int main(void)
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		scanf("%d", &step[i]);

	sum[1] = step[1];
	for (int i = 2; i <= N; i++)
		sum[i] = max(step[i - 1] + sum[i - 3], sum[i - 2]) + step[i];

	printf("%d", sum[N]);
	return 0;
}
