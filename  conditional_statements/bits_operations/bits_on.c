/*. Продолжите программу. Необходимо проверить, 
что биты 3 и 5 переменной bits включены (установлены в 1). 
Если это так, то выведите в консоль значение переменной bits в виде целого десятичного числа, 
иначе целое число -1.
P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается с нуля: 7, 6, 5, 4, 3, 2, 1, 0*/

#include <stdio.h>
/* Для начала нужно узнать маску, и воспользоваться И/&*/
int main(void)
{
    unsigned char bits;
    scanf("%hhu", &bits);
    // здесь продолжайте программу
    printf("%d", (bits & 40) == 40 ? bits : -1);

    return 0;
}