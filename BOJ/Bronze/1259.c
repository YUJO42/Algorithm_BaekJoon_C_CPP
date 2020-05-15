/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1259.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:08:44 by yujo              #+#    #+#             */
/*   Updated: 2020/05/15 16:17:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int num;

	while (1)
	{
		scanf("%d", &num);
		
		if (num == 0)
			return 0;

		int reverse_num = 0;
		int temp = num;

		while (num > 0)
		{
			reverse_num *= 10;
			reverse_num += (num % 10);
			num /= 10;
		}
		if (temp == reverse_num)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}
