#include <bits/stdc++.h>
using namespace std;

int main(void)
{
        ios::sync_with_stdio(0);
        cin.tie(0);

        int n, k;

        cin >> n >> k;

        queue<int> Q;
        for (int i = 1; i <= n; i++)
                Q.push(i);

        cout << "<";
        while (!Q.empty())
        {
                for (int i = 0; i < k - 1; i++)
                {
                        int temp = Q.front();
                        Q.pop();
                        Q.push(temp);
                }
                if (Q.size() == 1)
                        cout << Q.front() << '>';
                else
                        cout << Q.front() << ", ";
                Q.pop();
        }

        return 0;
}
