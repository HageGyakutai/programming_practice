#include <stdio.h>
/*Перевод часов в минуты - секунды*/
int main(void)
{
    unsigned int time = 4 * 3600 + 32*60 + 18; //Время в секундах
    // часы : минуты : секунды
    unsigned int sec = time % 60; //Количество секунд
    unsigned int min = (time / 60) % 60; //Исключаем часы, остаются только минуты
    unsigned int hour = time / 3600; // секунд в часах
    
    printf("%02d:%02d:%02d", hour, min, sec);

    return 0;
}