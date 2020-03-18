/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1759.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 07:20:48 by yujo              #+#    #+#             */
/*   Updated: 2020/03/18 07:34:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int l, c;

	scanf("%d %d", &l, &c);

	char arr[c];
	
	for (int i = 0; i < c; i++)
		scanf("%c", &arr[i]);

	sort(arr, arr + c);
	// 1개의 모음, 두 개 이상의 자음
	// a, e, i, o , u + a ~ z;
	// 알파벳은 증가하는 순서로 배열
	
	while (1)
	{
		int aeiou = 0;
		for (int i = 0; arr[i]; i++)
		{
			if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
				aeiou = 1;
			for (int j 
		}
	}
}
