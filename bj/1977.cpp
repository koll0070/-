#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
    fastio;
    int n, m;
    cin >> m >> n;
    int sum = 0, min = 99999, sq = 0, i = 1;
    while((sq = i * i) <= n)
    {
        if(sq >= m)
        {
            sum += sq;
            if(sq < min)
                min = sq;
        }
        i++;
    }
    if(sum == 0)
        cout << -1;
    else
        cout << sum << '\n' << min;

    return 0;
}