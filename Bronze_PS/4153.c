/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4153.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 22:16:14 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 22:43:38 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	while (EOF)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 || b == 0 || c == 0)
			return 0;
		if(a * a == b * b + c * c)
			printf("right\n");
		else if (b * b == a * a + c * c)
			printf("right\n");
		else if (c * c == a * a + b * b)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}
