/*Алгоритм фибоначчи через переменные */
#include <stdio.h>
int main() 
{
    unsigned int n,i,a1,a2,b;
    scanf("%d",&n);
    a1 = 1;
    a2 = 1;
    printf("%d %d ",a1,a2);
    for (i=3; i<=n; i++) 
    {
        printf("%d ", a1+a2);
        b = a1;
        a1 = a2;
        a2 = b + a1;
    }
    printf("\n");
    
    return 0;
}
