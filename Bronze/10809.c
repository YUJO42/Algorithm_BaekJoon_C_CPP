/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10809.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:26:19 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 16:02:29 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char 	str[101];
	int		arr[26];

	scanf("%s", str);
	for (int i = 0; i < 26; i++)
			arr[i] = -1;
	for (int i = 0; i <= str[i]; i++)
	{
		if (arr[str[i] - 97] != -1)
			continue;
		else
			arr[str[i] - 97] = i;
	
	}

	for (int i = 0; i < 25; i++)
		printf("%d ", arr[i]);
	printf("%d", arr[25]);

	return 0;
}
