/* Проверка на простоту числа введенного с клавиатуры */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{   
    int x;
    printf("Wnter number to check for simplicity: ");
    scanf("%d", &x);

    bool is_prime = true;
    
    for (int divisor = 2; divisor * divisor <= x; ++divisor)// можно создавать переменные в цикле for
        if (x % divisor == 0)
        {    
            is_prime = false;
            break;
        }
    if (is_prime)
        printf("Number %d is prime!\n", x);
    else
        printf("Number %d is not prime... \n", x);\

    return 0;
}