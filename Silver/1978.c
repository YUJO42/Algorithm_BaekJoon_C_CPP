/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1978.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 02:14:24 by yujo              #+#    #+#             */
/*   Updated: 2020/03/08 02:59:16 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

bool isprime(int n)
{
	int i = 2;
	if (n < 2)
		return false;
	while (i < n)
	{
		if (n % i == 0)
			return false;
		i++;
	}
	return true;

}

int main(void)
{
	int n;
	int arr[105];
	int count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++)
		if (isprime(arr[i]) == true)
			count++;

	printf("%d", count);

	return 0;
}
