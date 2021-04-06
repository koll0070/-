#include<bits/stdc++.h>
using namespace std;
int d[10001];
int main()
{
    for(int i=1; i<10001; i++)
    {
        int ori = i;
        int temp = ori;
        while(ori)
        {
            temp = temp + ori % 10;
            ori = ori / 10;
        }
        d[temp] = i;
    }
    for(int i=1; i<10001; i++)
    {
        if(!d[i])
            cout << i << '\n';
    }

    return 0;
}