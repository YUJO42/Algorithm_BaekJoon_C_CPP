/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6321.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 13:08:02 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 13:12:57 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	char str[55];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		printf("String #%d\n", i + 1);
		for (int j = 0; str[j]; j++)
		{
			if (str[j] == 'Z')
				printf("A");
			else
				printf("%c", str[j] + 1);
		}
		printf("\n\n");
	}

	return 0;
}
