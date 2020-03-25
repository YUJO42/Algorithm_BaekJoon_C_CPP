/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iterator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 19:02:46 by yujo              #+#    #+#             */
/*   Updated: 2020/03/24 19:17:42 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr;

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	arr.push_back(50);
	
	vector<int>::iterator iter=arr.begin();

	//cout << iter[3] << '\n';

	for (int i = 0; arr[i]; i++)
		cout << "iter : " << iter[i] << '\n';
	cout << '\n';

	iter += 2;

	cout << "iter[2] : " << *iter << '\n' << '\n';

	*iter = 2;
	cout << "arr[2] : " << arr[2] << '\n' << '\n';

	for (iter = arr.begin(); iter != arr.end(); iter++)
		cout << *iter << '\n';


	return 0;
}
