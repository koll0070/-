#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
    {
        char s[80];
        int cnt = 0, score = 0;
        scanf("%s", s);
        for(int j=0; s[j]; j++)
        {
            if(s[j] == 'X')
            {
                cnt = 0;
            }
            else
            {
                cnt++;
                score += cnt;
            }
        }
        printf("%d\n", score);
    }

	return 0;
}
