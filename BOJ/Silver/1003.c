/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1003.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:31:31 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 15:58:30 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[41] = {0, };

int fibo(int n)
{
	if (n == 0)
	{
		arr[0] = 0;
		return 0;
	}
	else if (n == 1)
	{
		arr[1] = 1;
		return 1;
	}

	if (arr[n] != 0)
		return arr[n];
	else
		return arr[n] = fibo(n - 1) + fibo(n - 2);
}

int main(void)
{
	int n;
	int m;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if (m == 0)
			printf("%d %d\n", 1, 0);
		else if (m == 1)
			printf("%d %d\n", 0, 1);
		else
		{
			fibo(m);
			printf("%d %d\n", arr[m - 1], arr[m]);
		}
	}

	return 0;
}
