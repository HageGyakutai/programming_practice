/*Арифмитическая прогрессия*/
#include <stdio.h>
#define  ERROR_value printf("ERROR value\n"); return 0; // макрос ошибки
int main(void)

{
    int start, stop, step;
printf("Generator of progression. \n"
"Enter start, stop, step: \n");
if(scanf("%d%d%d", &start, &stop, &step) != 3)
{   
    ERROR_value
};
if(step == 0) 
{       printf("Error input step\n");
        ERROR_value
}
int sing = (step > 0)? +1: -1; // если шаг положительный  тернарный оператор // не через шаг, не будет переполнения типа
int x = start;
while (sing * x < sing * stop)
{
    printf("x = %d\n", x);
    x += step;
}

printf("After: x = %d\n", x);

return 0;

}

