/*Напишите программу, в которой объявляется макроопределение MAX_LENGTH с целочисленным значением 100. 
В функции main() реализовать чтение двух целочисленных положительных чисел, 
записанных в одну строчку через пробел, в переменные x и y (именно в таком порядке). 
Затем, выполнить проверку: если длина радиус-вектора с координатами (x, y) превышает значение MAX_LENGTH, 
то в консоль вывести сообщение (без кавычек):

    "Radius length exceeds value of MAX_LENGTH"

Иначе вывести в консоль длину радиус-вектора в виде вещественного числа с точностью до сотых.
Напомню, что длина радиус-вектора с координатами (x, y) вычисляется по формуле:
    sqrt(x * x + y * y)    */

#include <stdio.h>
#include <math.h>
#define MAX_LENGTH 100

int main(void)
{
  int x, y;
  
  if(scanf("%d %d", &x, &y) != 2) {
    printf("ERROR input");
    return 0;
    }
  
  double length = sqrt(x * x + y * y);
  (length > MAX_LENGTH) ? printf("Radius length exceeds value of MAX_LENGTH") : printf("%.2lf", length);
      

  return 0;
}