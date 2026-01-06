#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,toplam=0;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i++)
    {
        toplam+=i;
    }
    printf("1'den %d'ye olan sayilarinizin toplami: %d",sayi,toplam);

    return 0;
}
