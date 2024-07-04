#include <stdio.h>

int main (void) 
{
  int n, s = 0; // трамвайное присваивание
  wihle(scanf("%1d", &n) ==1)// синтаксический сахар. Считывает по одной цифре числа пока есть цифры 
    s+= n;
printf("%d", s);
  return 0;
