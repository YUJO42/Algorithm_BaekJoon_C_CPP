/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5622.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:31:53 by yujo              #+#    #+#             */
/*   Updated: 2020/03/07 20:41:38 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check_time(char c)
{
	if ('A' <= c && c <= 'C')
		return 3;
	else if ('D' <= c && c <= 'F')
		return 4;
	else if ('G' <= c && c <= 'I')
		return 5;
	else if ('J' <= c && c <= 'L')
		return 6;
	else if ('M' <= c && c <= 'O')
		return 7;
	else if ('P' <= c && c <= 'S')
		return 8;
	else if ('T' <= c && c <= 'V')
		return 9;
	else if ('W' <= c && c <= 'Z')
		return 10;
	else
		return 2;
}

int main(void)
{
	int time = 0;
	char str[20];

	scanf("%s", str);
	for (int i = 0; str[i]; i++)
		time += check_time(str[i]);
	printf("%d", time);

	return 0;
}
