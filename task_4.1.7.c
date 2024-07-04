/*Напишите программу, которая читает из входного потока натуральное число n (целое, положительное), которое содержит от 2-х и более цифр. Используя цикл while, вычислить сумму цифр числа n. Результат вывести в консоль в виде одного целого числа.
*/
#include <stdio.h>

int main(void)
{
  int n, res = scanf("%d", &n) - 1;
  while(n > 0)
  {
    res += n % 10;
    n /= 10;
   }
  printf("%d", res);
  
  return 0;
}
