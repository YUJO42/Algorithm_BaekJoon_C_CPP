/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_at.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 14:14:25 by yujo              #+#    #+#             */
/*   Updated: 2020/03/25 14:20:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> my_vector (10);

	// none assign value
	for (int i = 0; i < my_vector.size(); i++)
		printf("my_vector[%d] : %d\n", i, my_vector[i]);
	cout << '\n';

	// assign value
	for (int i = 0; i < my_vector.size(); i++)
		my_vector.at(i) = i;
	for (int i = 0; i < my_vector.size(); i++)
		printf("my_vector[%d] : %d\n", i, my_vector[i]);
	cout << '\n';

}
