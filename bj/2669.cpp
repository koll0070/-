#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int sum = 0;
    for(int i=0; i<4; i++)
    {
        int x, y, x1, y1;
        scanf("%d %d %d %d", &x, &y, &x1, &y1);
        for(int j=y; j<y1; j++)
        {
            for(int k=x; k<x1; k++)
            {
                if(a[j][k] == 0)
                {
                    a[j][k] = 1;
                    sum++;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}
