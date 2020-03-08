/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1159.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 16:39:07 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 17:12:09 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;
	int count = 0;
	int arr[26] = {0, };
	char name[30];
	//freopen("input.txt", "r", stdin);

	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{
		scanf("%s", name);
		arr[name[0] - 'a'] += 1;
	}

	for (int i = 0; i < 26; i++)
		if (arr[i] > 4)
			count++;
	if (count == 0)
		printf("PREDAJA");
	for (int i = 0; i < 26; i++)
		if (arr[i] > 4)
			printf("%c", i + 'a');

	return 0;
}
