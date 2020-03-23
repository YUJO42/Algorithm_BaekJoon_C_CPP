/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   18245.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 02:33:17 by yujo              #+#    #+#             */
/*   Updated: 2020/03/20 02:51:07 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	for (int i = 2; i < 102; i++)
	{
		char str[100005] = {0, };
		scanf("%[^\n]s", str);
		getchar();
			
		if (!(strcmp(str, "Was it a cat I saw?")))
			break;

		for (int j = 0; str[j]; j += i)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}

	return 0;
}
