/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8958.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 21:56:32 by yujo              #+#    #+#             */
/*   Updated: 2020/03/05 22:56:44 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int sum;
	int plus;
	char arr[81];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		plus = 1;
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++)
		{
			if(arr[j] == 'O')
			{
				sum += plus;
				plus++;
			}
			else
				plus = 1;
		}
		printf("%d\n", sum);
	}

	return 0;
}
