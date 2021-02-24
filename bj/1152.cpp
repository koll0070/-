#include<bits/stdc++.h>
using namespace std;
char s[1000001];
int main()
{
    int ans = 0;
	gets(s);
	int len = strlen(s);
	for(int i=0; i<len; i++) {
        if(s[i]==' ')
            ans++;
    }
    if(len == ans) {
        printf("0");
        return 0;
    }
    ans++;
    if(s[0] == ' ')
        ans--;
    if(s[len-1] == ' ')
        ans--;
    printf("%d", ans);
	return 0;
}
