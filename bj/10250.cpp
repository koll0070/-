#include<bits/stdc++.h>
int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
    {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        int a, b;
        if(n % h)
        {
            a = n % h;
            b = n /h + 1;
        }
        else
        {
            a = h;
            b = n /h;
        }
        printf("%d\n", a * 100 + b);
    }

	return 0;
}
