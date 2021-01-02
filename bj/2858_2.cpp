#include <iostream>
using namespace std;
 
int main(void)
{
    int R, B;
    scanf("%d %d", &R, &B);
    int i = 0;
    while (++i)
    {
        if (B % i == 0)
        {
            int r = B / i;
            if ((r + i + 2) * 2 == R)
            {
                printf("%d %d", r+2, i+2);
                break;
            }
        }
    }
    return 0;
}