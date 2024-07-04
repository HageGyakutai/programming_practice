/*В какой четверти на графике, находятся точки введеные с клавиатуры*/
#include <stdio.h>

int main(void)
{   
    int x, y;
    if(scanf("%d %d", &x, &y) != 2)
    {
        printf("Error input");
        return 0;
    }

    if (y > 0)
        if (x > 0)
            printf("1-st quarter.\n");
        else
            printf("2-nd quarter.\n");
    else
        if (x < 0)
            printf("3-rd quarter.\n");
        else
            printf("4-th quarter.\n");            

    return 0;
}
