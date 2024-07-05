#include <stdio.h>
#include <stdbool.h>

bool is_prime_number(int x)
/* Функция проверки числа на простое\составное*/
{
    for (int divisor = 2; divisor * divisor <= x; ++divisor)
        if (x % divisor == 0)
            return false;     
    return true;        
}

int main(void)
/*Основная функции. Ввод числа с клавитуры. Принты в терминал*/
{   
    int x;
    printf("Enter number to check for  simplicity: ");
    scanf("%d", &x);

    if (is_prime_number(x))
        printf("Number %d is prime! \n", x);
    else
        printf("Number %d is not prime... \n");    


    return 0;
}
