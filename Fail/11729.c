/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11729.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 01:43:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 02:00:19 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

void hanoi(int n, int one, int two, int three)
{
	if (n == 1)
		printf("%d %d\n", one, three);
	else 
	{
		hanoi(n - 1, one, three, two);
		printf("%d %d\n", one, three);
		hanoi(n - 1, two, one, three);
	}

int main(void)
{
	int n;

	scanf("%d", &n);

	int k = pow(2, n) - 1;

	printf("%d\n", k);
	hanoi(n, 1, 2, 3);

	return 0;
}
