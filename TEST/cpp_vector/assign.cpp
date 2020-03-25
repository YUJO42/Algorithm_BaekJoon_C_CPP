/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_assign.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 18:37:41 by yujo              #+#    #+#             */
/*   Updated: 2020/03/24 19:27:50 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  vector<int> first;
  vector<int> second;
  vector<int> third; 

  first.assign (7,100);

  vector<int>::iterator it=first.begin()+1;

  second.assign (it,first.end()-1);

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);

  cout << "Size of first: " << int (first.size()) << '\n';
  vector<int>::iterator i = first.begin();
  for (int i = 0; first[i]; i++)
	  printf("first[%d] : %d\n", i, first[i]);
  cout << "Size of second: " << int (second.size()) << '\n';
  cout << "Size of third: " << int (third.size()) << '\n';
  return 0;
}
