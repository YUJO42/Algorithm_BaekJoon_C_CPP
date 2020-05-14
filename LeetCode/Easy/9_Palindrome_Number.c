/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9_Palindrome_Number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:10:44 by yujo              #+#    #+#             */
/*   Updated: 2020/05/14 19:34:08 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool isPalindrome(int x)
{
	if (x < 0 || (x % 10 == 0 && x != 0))
		return false;
	
	long long temp = (long long)x;
	long long reverse_x = 0;
	
	while (x > 0)
	{
		reverse_x *= 10;
		reverse_x += (x % 10);
		x /= 10;
	}
	if (temp == reverse_x)
		return true;
	else
		return false;
}

#include <stdio.h>

int main(void)
{
	if (isPalindrome(-121))
		printf("TRUE");
	else
		printf("FALSE");
	
}
