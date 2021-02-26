#include<bits/stdc++.h>
using namespace std;
char s[101];
int ans[26];
int main()
{
    memset(ans, -1, sizeof(ans));
	gets(s);
	int len = strlen(s);
	for(int i=0; i<len; i++) {
        if(ans[s[i]-'a'] == -1)
            ans[s[i]-'a'] = i;
    }
    for(int i=0; i<26; i++) {
        printf("%d ", ans[i]);
    }
	return 0;
}
