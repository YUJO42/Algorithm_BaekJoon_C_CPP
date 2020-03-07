/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4344.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 22:58:13 by yujo              #+#    #+#             */
/*   Updated: 2020/03/05 23:52:42 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int 	c;
	int 	n;
	int		sum;
	int		cnt;
	int		arr[1005];
	float	ave;

	scanf("%d", &c);
	for (int i = 0; i < c; i++)
	{
		sum = 0;
		ave = 0.0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j]; 
		}
		ave = (float)sum / n;
		cnt = 0;
		for (int k = 0; k < n; k++)
		{
			if (ave < arr[k])
				cnt += 1;
		}
		printf("%.3f%%\n", (float)cnt * 100 / n);
	}
	
	return 0;
}
