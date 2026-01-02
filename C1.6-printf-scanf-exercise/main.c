#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    char basharf;

    printf("Lutfen 1. sayiyi giriniz: ");
    scanf("%d",&sayi1);

    printf("Lutfen 2. sayiyi giriniz: ");
    scanf("%d",&sayi2);

    printf("Lutfen karakter giriniz: ");
    scanf(" %c",&basharf);

    printf("1. Sayi: %d \n2. Sayi: %d \nKarakterin: %c",sayi1,sayi2,basharf);
    return 0;
}
