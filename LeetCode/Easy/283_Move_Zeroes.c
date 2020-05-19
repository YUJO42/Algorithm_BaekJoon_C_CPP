/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   283_Move_Zeroes.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 16:04:09 by yujo              #+#    #+#             */
/*   Updated: 2020/05/19 16:18:23 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// version 1
/*
void moveZeroes(int* nums, int numsSize)

{

    int *result;
    int check = 0;

    result = (int *)malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++)

    {
        if (nums[i] != 0)
        {
            result[check] = nums[i];
            check++;
        }
    }

    while(check < numsSize)
    {
        result[check] = 0;
        check++;
    }

    for (int i = 0; i < numsSize; i++)
        nums[i] = result[i];
    free(result);
}
*/

// version 2


int main(void)
{
    int test[5] = {0, 1, 0, 3, 12};

    moveZeroes(test, 5);

	for (int i = 0; i < 5; i++)
		printf("%d ", test[i]);
}
