#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sayi;
    float sayi2;

    printf("1 Adet Double sayi giriniz: ");
    scanf("%lf",&sayi);

    printf("1 Adet float sayi giriniz: ");
    scanf("%f",&sayi2);

    printf("Double : %.2lf\nfloat:%.2f",sayi,sayi2);
    return 0;
}
