#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;

    printf("2 Adet sayi giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);

    if(sayi1==sayi2)
    {
        printf("%d = %d",sayi1,sayi2);
    }
    else if(sayi1>sayi2)
    {
        printf("%d > %d",sayi1,sayi2);
    }
    else
    {
        printf("%d < %d",sayi1,sayi2);
    }
    return 0;
}
