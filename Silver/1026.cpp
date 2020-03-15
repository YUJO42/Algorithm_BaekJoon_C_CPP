/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1026.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:25:05 by yujo              #+#    #+#             */
/*   Updated: 2020/03/15 16:11:27 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;

	scanf("%d", &n);

	int a[n];
	int b[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	sort(a, a + n);
	sort(b, b + n);
	/*
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
		printf("b[%d] = %d\n", n - 1 - i, b[n - 1 - i]);
	}
	*/
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += a[i] * b[n - 1 - i];
	}

	printf("%d", sum);

	return 0;
}
