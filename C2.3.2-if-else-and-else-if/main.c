#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Lutfen X'i giriniz: ");
    scanf("%d",&x);

    printf("Lutfen Y'yi giriniz: ");
    scanf("%d",&y);

    if(x>y)
    {
        printf("X y'den buyuk");
    }
    else if (x<y)
    {
        printf("Y X'den buyuk");
    }
    else if(x==y)
    {
        printf("X ve Y birbirine esit");
    }
    else
    {
        printf("Dogru bir deger giriniz");
    }
    return 0;
}
