/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   at.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 20:36:18 by yujo              #+#    #+#             */
/*   Updated: 2020/04/02 20:40:00 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
	map<string, int> my ={
		{ "alpha", 0},
		{ "beta", 0},
		{ "gamma", 0} };
    my.at("alpha") = 10;
    my.at("beta") = 20;
    my.at("gamma") = 30;

    for (auto& x: my) {
		cout << x.first << ": " << x.second << '\n';
    }



	return 0;
}
