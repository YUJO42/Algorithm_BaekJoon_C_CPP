/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10804.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 13:45:09 by yujo              #+#    #+#             */
/*   Updated: 2020/03/22 14:23:15 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void)
{
	int card[20];

	for (int i = 1; i <= 20; i++)
		card[i - 1] = i;

	int x, y;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d %d", &x, &y);
		reverse(card + (x - 1), card + y);
	}

	for (int i = 0; i < 20; i++)
		printf("%d ", card[i]);

	return 0;
}
