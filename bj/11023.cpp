#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for(int i=0; i<t; i++)
    {
        int n, sum = 0;
        while(~scanf("%d", &n))
        {
            sum += n;
        }
        printf("%d\n", sum);
    }

	return 0;
}
