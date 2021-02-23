#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[3];
	for(int i=0; i<3; i++)
    {
        scanf("%d", &ar[i]);
    }
	sort(ar, ar+3);
	printf("%d", ar[1]);

	return 0;
}
