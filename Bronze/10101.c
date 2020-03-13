/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10101.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 11:54:30 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 12:28:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum = 0;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	sum = a + b + c;

	if (sum != 180)
		printf("Error");
	else if (a == b && b == c && a == c)
		printf("Equilateral");
	else if (a != b && b != c && a != c)
		printf("Scalene");
	else if ((a == b && b != c) || (b == c && c != a) || (a == c || c != b)
		printf("Isosceles");

	return 0;
}
