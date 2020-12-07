/*
백준 문제 번호 : 1978
소수 찾기
*/
#include <cstdio>
using namespace std;

bool is_prime(int n)
{
    if(n<2)
        return false;
    for(int i=2; i*i<=n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main ()
{
    int n, cnt = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int num;
        scanf("%d", &num);
        if(is_prime(num))
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}