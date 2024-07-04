/*Каскадный IF 
В какой четверти на графике, находятся точки введеные с клавиатуры*/
#include <stdio.h>

int main(void)
{   
    int x, y;
    if(scanf("%d %d", &x, &y) != 2)
    {
        printf("Error input");
        return 0;
    }

    if (y > 0 && x > 0)
            printf("1-st quarter.\n");
    else if (y > 0 && x < 0)
            printf("2-nd quarter.\n");
    else if (y < 0 && x < 0)
            printf("3-rd quarter.\n");
    else if (y < 0 && x > 0) 
            printf("4-th quarter.\n");            
    else
        printf("Point is on axis.\n"); // Точка находится на осях


    return 0;
}
