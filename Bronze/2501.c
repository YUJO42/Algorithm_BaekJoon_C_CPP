/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2501.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 01:38:43 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 01:46:03 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n, k;

	scanf("%d %d", &n, &k);

	int arr[10005] = {0, };
	int j = 1;
	for (int i = 1; i <= n; i++)
	{
		if(n % i == 0)
			arr[j++] = i;
	}

	printf("%d", arr[k]);

	return 0;
}