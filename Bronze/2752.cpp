/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2752.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 07:48:32 by yujo              #+#    #+#             */
/*   Updated: 2020/03/18 07:55:36 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int a, b, c;
	int arr[3];

	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + 3);
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);

	return 0;
}
