/*Подвиг 10 (на повторение). 
На плоскости размером rect_width x rect_height (ширина x высота) размещены непересекающиеся прямоугольники
 одинаковых размеров w x h, следующих друг за другом, как показано на рисунке ниже.
Необходимо продолжить программу, 
вычислив общее число прямоугольников целиком умещающихся на плоскости. 
Результат вывести в консоль в виде одного целого числа.*/
#include <stdio.h>

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    scanf("%d; %d", &w, &h);

    // здесь продолжайте программу
    printf("%d", (rect_height / h) * (rect_width / w)); // здесь при делении идет отбрасывание дробной части, поэтому нельзя упрощать по математике(rect_h * rect_w) / (h * w)
    return 0;
}