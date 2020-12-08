#include <cstdio>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}
int main ()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;
        long long sum=0;
        scanf("%d", &n);
        int ar[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d", &ar[j]);
        }
        for(int j=0; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                sum += gcd(ar[j], ar[k]);
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}