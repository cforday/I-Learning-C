#include <stdio.h>
#include <stdlib.h>

int main()
{
    //+ - * / % ++ --
    int x = 5;
    int y = 3;

    //Toplama
    printf("Toplam: %d\n",x+y);
    //Çıkarma
    printf("Cikarma: %d\n",x-y);
    //Çarpma
    printf("Carpma: %d\n",x*y);
    //Bölme
    printf("Bolme: %f\n",x/y);
    //Mod alma
    printf("Mod Alma: %d\n",x%y);
    //Arttırma
    printf("Ilk degeri 5 olan sayiyi arttirma: %d\n",++x);
    //Azaltma
    printf("Ilk degeri 3 olan sayiyi azaltma: %d",--y);

    return 0;
}
