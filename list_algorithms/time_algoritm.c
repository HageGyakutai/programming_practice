#include <stdio.h>

int main(void)
{
    unsigned short time_h = 10; // часы
    unsigned short time_m = 33; // минуты
    unsigned short time_s = 5; // секунды

    unsigned short h, m, s; // добавляемое время: h - часы; m - минуты; s - секунды
    scanf("%hu; %hu; %hu", &h, &m, &s);

    // здесь продолжайте программу
    int time = (time_h + h) * 3600 + (time_m + m) * 60 + time_s + s; // общее кол-во секунд
    time_s = time % 60; //остаток секунд
    time_m =  (time / 60) % 60; // остаток минут
    time_h = time / 3600; // кол-во часов
    
    printf("%02d:%02d:%02d", time_h, time_m, time_s);

    return 0;
}