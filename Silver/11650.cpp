/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11650.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 23:44:37 by yujo              #+#    #+#             */
/*   Updated: 2020/03/21 01:44:13 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	scanf("%d", &n);

	pair<int, int>arr[100001];

	for (int i = 0; i < n; i++)
		scanf("%d %d", &arr[i].first, &arr[i].second);

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", arr[i].first, arr[i].second);

	return 0;
}
