/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10816.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:47:36 by yujo              #+#    #+#             */
/*   Updated: 2020/03/26 10:07:31 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

/*
 * TRY _ 1
int main(void)
{
	ios_base::sync_with_stdio(0);
	int N;
	cin >> N;
	vector<int> s_card(N, 0);

	for (int i = 0; i < N; i++)
		cin >> s_card[i];
	
	sort(s_card.begin(), s_card.end());

	int M;
	cin >> M;
	int card;

	for (int i = 0; i < M; i++)
	{
		cin >> card;
		cout << upper_bound(s_card.begin(), s_card.end(), card) - lower_bound(s_card.begin(), s_card.end(), card);
		cout << ' ';
	}

	return 0;
}

 * TRY _ 2

map<int, int> mp;
int n, m, x;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        mp[x]++;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        printf("%d ", mp[x]);
    }
    return 0;
}
*/

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	vector<int> s_card(N, 0);

	for (int i = 0; i < N; i++)
		cin >> s_card[i];

	sort(s_card.begin(), s_card.end());

	int M;
	cin >> M;
	int card;

	for (int i = 0; i < M; i++)
	{
		cin >> card;
		cout << upper_bound(s_card.begin(), s_card.end(), card) - lower_bound(s_card.begin(), s_card.end(), card);
		cout << ' ';
	}

	return 0;
}

