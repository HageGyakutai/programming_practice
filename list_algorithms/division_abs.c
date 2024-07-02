/*  На плоскости размером rect_width x rect_height (ширина x высота)
    размещены непересекающиеся прямоугольники одинаковых размеров w x h,
    следующих друг за другом, как показано на рисунке ниже.
    Необходимо продолжить программу, вычислив общее число прямоугольников не
    умещающихся целиком на плоскости. Результат вывести в консоль в виде одного целого числа.*/

#include <stdio.h>
#include <stdbool.h>
#define  ERROR_value printf("ERROR value\n"); return 0; //Ошибка на scanf

int main(void)
{
    int rect_width = 640, rect_height = 480;
    int w = 1, h = 1;
    if(scanf("%d; %d", &w, &h) != 2)
    {
        ERROR_value 
    }

    // здесь продолжайте программу
    bool a = rect_width % w != 0;// остаток по ширине, есть ли там прямоугольник
    bool b = rect_height % h != 0;// остаток по высоте, если лм там прямлугольник
    bool s = a && b; // пересечение остатков
    
    printf("%d\n", (rect_width / w * b) + (rect_height / h * a) + s);

    return 0;
}