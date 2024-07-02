#include <stdio.h>
#define MAX_BUFF_SIZE 1024

int main(void)
{
    int buff_size;
    if(scanf("%d", &buff_size) != 1)
    {   
        printf("ERROR input\n");
        return 0;
    }
    
    buff_size = buff_size > MAX_BUFF_SIZE ? MAX_BUFF_SIZE : buff_size;

    printf("%d\n", buff_size);

    return 0;
}