/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   35_Search_Insert_Position.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 13:11:30 by yujo              #+#    #+#             */
/*   Updated: 2020/05/17 13:37:04 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int searchInsert(int *nums, int numSize, int target)
{
	int i = 0;
	
	if (nums[numSize - 1] < target)
		return numSize;

	while (target != nums[i] && i < numSize)
	{
		if (target < nums[i])
			break;
		i++;
	}
	return i;
}


int main(void)
{
	int nums[4] = {1, 3, 5, 6};

	printf("test1 : %d\n", searchInsert(nums, 4, 5));
	printf("test2 : %d\n", searchInsert(nums, 4, 2));
	printf("test3 : %d\n", searchInsert(nums, 4, 7));
	printf("test4 : %d\n", searchInsert(nums, 4, 0));

}
