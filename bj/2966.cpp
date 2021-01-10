#include <cstdio>
char A[4] = {'A','B','C'};
char B[5] = {'B','A','B','C'};
char C[7] = {'C','C','A','A','B','B'};
int N;
int cntA=0, cntB=0, cntC=0;
int main()
{
    scanf("%d", &N);
    char tmp[N];
    scanf("%s", tmp);
    for(int i=0; i<N; i++)
    {
        if(tmp[i] == A[i%3])
            cntA++;
        if(tmp[i] == B[i%4])
            cntB++;
        if(tmp[i] == C[i%6])
            cntC++;
    }
    int Max = -1;
    if(Max < cntA)
        Max = cntA;
    if(Max < cntB)
        Max = cntB;
    if(Max < cntC)
        Max = cntC;
    printf("%d\n", Max);
    if(Max == cntA)
        printf("Adrian\n");
    if(Max == cntB)
        printf("Bruno\n");
    if(Max == cntC)
        printf("Goran\n");
    return 0;
}