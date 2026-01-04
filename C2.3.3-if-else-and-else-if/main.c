#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("3 Adet sayi giriniz: ");
    scanf("%d%d%d",&x,&y,&z);

    /*if(x>y && x>z)
    {
        printf("En Buyuk sayi %d'dir",x);
    }
    if(y>x && y>z)
    {
        printf("En Buyuk sayi %d'dir",y);
    }
    if(z>x && z>y)
    {
        printf("En Buyuk sayi %d'dir",z);
    }
    if(x==y && x==z)
    {
        printf("Butun sayilar birbirine esittir");
    }
    */
    if(x>y && x>z)
    {
        printf("En Buyuk sayi %d'dir",x);
    }
    else if(y>x && y>z)
    {
        printf("En Buyuk sayi %d'dir",y);
    }
    else if(z>x && z>y)
    {
        printf("En Buyuk sayi %d'dir",z);
    }
    else
    {
        printf("Butun sayilar birbirine esittir");
    }


    return 0;
}
