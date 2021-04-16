#include <bits/stdc++.h>
using namespace std;

bool check[10001];
int d[4] = {1, 5, 10, 50};
int N, cnt;

void Input()
{
    cin >> N;
}

void go(int index, int cur, int total)
{
    if(index == N)
    {
        if(check[total] == false)
        {
            check[total] = true;
            cnt++;
        }
        return;
    }
    for(int i=cur; i<4; i++)
    {
        go(index+1, i, total + d[i]);
    }
}

void Solve()
{
    Input();
    go(0, 0, 0);
    cout << cnt << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Solve();

    return 0;
}
