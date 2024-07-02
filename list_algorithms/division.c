#include <stdio.h>

int main(void)
{
    int x = -12345;
    while (x != 0)
    {
        printf("%d %d\n", x/10, x%10);
        x /= 10;
    }


    return 0;
}