/*Диапозон от 1 до 20 за исключение 13, деленных на 7
используется continue.
Для предотвращения  лишних ветвлений можно использовать.
Линейность кода. Лучше читабельность*/
#include <stdio.h>

int main(void)

{
    for (int i = 1; i < 20; i++)
    {
        if (i == 13) continue; // avoid skip 13. 
        if (i % 7 == 0) continue; // Skip multiples of 7.
        printf("Number i = %d. \n", i);
        if (i % 3 == 0)
            printf("It is a multiple of 3!\n", i);
        else
            printf("It's not a multiple of 3... \n", i);    }

    return 0;
}