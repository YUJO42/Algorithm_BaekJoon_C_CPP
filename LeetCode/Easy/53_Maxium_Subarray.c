/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   53_Maxium_Subarray.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 13:16:17 by yujo              #+#    #+#             */
/*   Updated: 2020/05/19 13:32:32 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* version 1
int maxSubArray(int* nums, int numsSize)
{
	if (numsSize < 1)
		return 0;
	if (numsSize == 1)
		return *nums;

	int result = -2147483648;
	
	for (int i = 0; i < numsSize; i++)
	{
		int sum = nums[i];
		if (result < sum)
			result = sum;
		for (int j = i + 1; j < numsSize; j++)
		{
			sum += nums[j];
			if (result < sum)
				result = sum;
		}
	}

	return result;
}
*/

int maxSubArray(int* nums, int numsSize)
{
	if (numsSize < 1)
		return 0;
	if (numsSize == 1)
		return *nums;

	int result = -2147483648;
	
	for (int i = 0; i < numsSize; i++)
	{
		int sum = nums[i];
		if (result < sum)
			result = sum;
		for (int j = i + 1; j < numsSize; j++)
		{
			sum += nums[j];
			if (result < sum)
				result = sum;
		}
	}

	return result;
}

int main(void)
{
	int test1[9] = {-2,1,-3,4,-1,2,1,-5,4};
	int test2[2] = {-2, 1}; 
	int test3[2] = {-2, -1};

	printf("test1 expect : 6, output : %d\n", maxSubArray(test1, 9));
	printf("test2 expect : 1, output : %d\n", maxSubArray(test2, 2));
	printf("test2 expect : -1, output : %d\n", maxSubArray(test3, 2));

	return 0;
}
