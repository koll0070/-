#include<bits/stdc++.h>
using namespace std;
int d[1001];
int main()
{
    int j = 1;
    int temp = j;
    for(int i=1; i<1001; i++)
    {
        d[i] = j;
        temp--;
        if(!temp)
        {
            j++;
            temp = j;
        }
    }
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for(int i=a; i<=b; i++)
    {
        sum += d[i];
    }
    cout << sum;
    return 0;
}