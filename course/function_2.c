/*
*/

#include <stdio.h>

int main(void)
{
    
    int digit; // переменная
    scanf("%d", &digit); // ввод переменной с клавиатуры
    

    int range = 10; // диапозон [0; range-1] не может превосходит значение 9
    int res = digit % range; // остаток от деления на range
    printf("res = %d\n", res); // вывод в терминал 
    return 0;
}

