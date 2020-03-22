/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2587.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 12:45:35 by yujo              #+#    #+#             */
/*   Updated: 2020/03/22 13:14:39 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	sort(arr, arr + 5);

	printf("%d\n", sum / 5);
	printf("%d\n", arr[2]);
}
