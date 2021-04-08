#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
string str, temp;

int palindrome(int st, int en)
{
	if (st > en)
        return 0;
	else if (str[st] == str[en])
		return palindrome(st + 1, en - 1);
	else return 1;
}

int main()
{
    fastio;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> str;
        temp = str;
        reverse(temp.begin(), temp.end());
        int t = stoi(str) + stoi(temp);
        str = to_string(t);
        if(palindrome(0, str.size()-1))
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }


    return 0;
}