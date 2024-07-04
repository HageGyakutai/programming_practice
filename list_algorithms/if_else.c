/*Проверка вводимого числа, четное или не четное*/
#include <stdio.h>

int main(void)
{
    int x = 1;
    scanf("%d", &x);
    while (x != 0) // 0  признак выхода
    {
        
        if (x%2 == 0)
            printf("Number %d is even.\n", x);
        else 
            printf("Number %d is odd.\n", x);    
        scanf("%d", &x);    
    }



    return 0;
}