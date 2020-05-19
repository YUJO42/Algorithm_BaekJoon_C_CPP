/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   33_Search_in_Rotated_Sorted_Array.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 13:50:12 by yujo              #+#    #+#             */
/*   Updated: 2020/05/19 13:55:23 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int search(int* nums, int numsSize, int target)
{	
	if (numsSize < 1)
		return -1;
	
	int result = -1;

	for (int i = 0; i < numsSize; i++)
	{
		if (target == nums[i])
		{
			result = i;
			break;
		}
	}

	return result;
}

int main(void)
{
	int test[7] = {4, 5, 6, 7, 0, 1, 2};

	printf("test1 expected : 4, output : %d\n", search(test, 7, 0));
	printf("test2 expected : -1, output : %d\n", search(test, 7, 3));

	return 0;
}
