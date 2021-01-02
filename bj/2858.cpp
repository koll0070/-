#include<cstdio>
int R, B;

bool isCheck(int L, int W)
{
    int bb = W - 2;
	int rr = L * W;

	bb = (L-2) * bb;
	rr -= bb;

	if(rr == R && bb == B)
		return true;

	return false;
}

int main()
{
    scanf("%d %d", &R, &B);
    int sum = R + B;
    int end = sum / 3;

    for(int L = 3; L<=end; L++)
    {
        int W = sum / L;

        if(W <= 2)
            continue;

        if(L * W == sum)
        {
            if(isCheck(L, W))
            {
                if(L > W)
                    printf("%d %d", L, W);
                else
                    printf("%d %d", W, L);

                return 0;
            }
        }
    }
}