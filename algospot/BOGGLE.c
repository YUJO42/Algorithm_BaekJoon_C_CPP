/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BOGGLE.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:51:57 by yujo              #+#    #+#             */
/*   Updated: 2020/05/18 17:07:32 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
	
char map[5][5];

int main(void)
{
	int C;
	scanf("%d", &C);
	
	for (int i = 0; i < 5; i++)
		scanf("%s", map[i]);
	
	while (C--)
	{
		int N;
		scanf("%d", &N);

		while (N--)
		{
			char *word;
			scanf("%s", word);

			while (word)
			{
				if 
			}
		}
	}

	return 0;
}
