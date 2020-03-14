/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11399.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:02:04 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 20:11:59 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	int sum = 0;
	int arr[1001];
	int time[1001];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + n);

	time[0] = arr[0];
	time[1] = arr[0] + arr[1];
	for (int i = 1; i <= n; i++)
		time[i] = arr[i] + time[i - 1];

	for (int i = 0; i < n; i++)
		sum += time[i];

	printf("%d", sum);

	return 0;
}
