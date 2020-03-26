/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 08:27:48 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 08:36:21 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(void)
{
	vector<int> my (3, 100);
	vector<int>::iterator it;

	for (int i = 0; i < my.size(); i++)
		printf("my vector [%d] : %d\n", i, my[i]);
	cout << "--DONE--" << '\n';

//####################################3
//
	it = my.begin();
	it = my.insert (it, 200);

	for (int i = 0; i < my.size(); i++)
		printf("my vector [%d] : %d\n", i, my[i]);
	cout << "--DONE--" << '\n';

//##################################
//
	my.insert (it, 2, 300);

	for (int i = 0; i < my.size(); i++)
		printf("my vector [%d] : %d\n", i, my[i]);
	cout << "--DONE--" << '\n';

//###################################

	std::vector<int> myvector (3,100);
	std::vector<int>::iterator ita;

	ita = myvector.begin();
    ita = myvector.insert ( ita , 200 );

    myvector.insert (ita,2,300);

    // "it" no longer valid, get a new one:
    it = myvector.begin();

    std::vector<int> anothervector (2,400);
    myvector.insert (ita+2,anothervector.begin(),anothervector.end());

    int myarray [] = { 501,502,503 };
    myvector.insert (myvector.begin(), myarray, myarray+3);

    std::cout << "myvector contains:";
    for (it=myvector.begin(); ita<myvector.end(); ita++)
        std::cout << ' ' << *ita;
    std::cout << '\n';

  return 0;
}
