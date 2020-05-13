/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.Two_sum.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 18:04:24 by yujo              #+#    #+#             */
/*   Updated: 2020/05/13 18:04:26 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int>tmp;
        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    tmp.push_back(i);
                    tmp.push_back(j);
                    return tmp;
                }
            }
        }
       return tmp; 
    }
};
