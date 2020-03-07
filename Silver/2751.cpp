/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2751.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:26:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 13:09:19 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int		main(void)
{
	int n;
	int arr[1000001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}
