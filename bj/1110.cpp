#include<cstdio>
int main()
{
	int n, origin, cnt = 0;
	scanf("%d", &n);
	origin = n;
	while(1)
    {
        int a, b;
        if(n < 10)
        {
            a = 0;
            b = n;
        }
        else
        {
            a = n / 10;
            b = n % 10;
        }
        n = b * 10 + (a + b) % 10;
        cnt++;
        if(origin == n)
            break;
    }
    printf("%d" , cnt);

	return 0;
}
