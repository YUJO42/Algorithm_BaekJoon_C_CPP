/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2908.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 21:29:46 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 22:05:52 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void swap(char *arr)
{
	char temp = 0;

	temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
}

int main(void)
{
	char arr1[3];
	char arr2[3];
		
	scanf("%s %s", arr1, arr2);
	swap(arr1);
	swap(arr2);

	char *res;
	
	if (arr1[0] != arr2[0])
		res = arr1[0] > arr2[0] ? arr1 : arr2;
	else if (arr1[0] == arr2[0] && arr1[1] != arr2[1])
		res = arr1[1] > arr2[1] ? arr1 : arr2;
	else if (arr1[0] == arr2[0] && arr1[1] == arr2[1])
		res = arr1[2] > arr2[2] ? arr1 : arr2;

	for (int i = 0; i < 3; i++)
		printf("%c", res[i]);

	return 0;
}
