#include <cstdio>
 
int main()
{
    int ar[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(int j=1; j<1000000; j++)
    {
        int cnt = 0;
        for(int i=0; i<5; i++)
        {
            if(j >= ar[i] && j % ar[i] == 0)
            {
                cnt++;
            }
        }
        if(cnt >= 3)
        {
            printf("%d\n", j);
            break;
        }
 
    }
    return 0;
}