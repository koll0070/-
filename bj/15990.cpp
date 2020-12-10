#include <cstdio>
const int mod = 1000000009;
const int MAXN = 100000;
long long dp[MAXN+1][4];
int main()
{
    int t;
    scanf("%d", &t);
    
    dp[1][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
    for(int i=4; i<=MAXN; i++)
    {
        if(i-1 >= 0)
            dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % mod;
        if(i-2 >= 0)
            dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % mod;
        if(i-3 >= 0)
            dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % mod;
    }
    
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", (dp[n][1] + dp[n][2] + dp[n][3]) % mod);
    }
    return 0;
}