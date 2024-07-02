/*Продолжите программу. Необходимо переключить 3 и 0 биты переменной bits. 
Результат сохраните в байтовой беззнаковой переменной res и выведите ее значение в консоль в виде целого десятичного числа.
P.S. Нумерация бит числа идет в порядке от младшего к старшему и начинается с нуля: 7, 6, 5, 4, 3, 2, 1, 0*/

#include <stdio.h>



int main(void)
{
    unsigned char bits, res;
    scanf("%hhu", &bits);
    res = bits ^ 0b00001001; // ^ переключает бит
    // здесь продолжайте программу
    printf("%d", res);
    return 0;
}