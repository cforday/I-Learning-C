#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=26;
    int y=25;

    if(x>y)
    {
        printf("x y'den buyuk");
    }
    else if(x==y)
    {
        printf("x y'ye esit");
    }
    else if(x<y)
    {
        printf("x y'den kucuk");
    }
    else
    {
        printf("Yanlis deger girdiniz");
    }
    return 0;
}
