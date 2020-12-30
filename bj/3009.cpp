#include <cstdio>
int main()
{
    int x=0, y=0, tx, ty;
    for(int i=0; i<3; i++)
    {
        scanf("%d %d", &tx, &ty);
		//비트 연산을 이용해서 중복된 수 삭제
        x ^= tx;
        y ^= ty;
    }
    printf("%d %d\n", x, y);
    return 0;
}