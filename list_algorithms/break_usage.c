/* Перевод чисел в 16-ти ричную систему. while and break
адекватное использование предотвращает дублирование кода на scanf*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    while (1)
    {
        int x;
        scanf("%d", &x);
        if (x == 0) break; // выход 
        {
            printf("Number %d in hexadecimal is %X. \n", x, x);

        }
        
    }
    
    return 0;
}
