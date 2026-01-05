#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Kullanıcıdan bir sayi girmesini isteyiniz if else kullnarak sayının tek çift mi olduğunu,
    // ekrana bastıran programı yazın
    int x;

    printf("Lutfen sayi giriniz");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Sayi Cift");
    }
    else
    {
        printf("Sayi tek");
    }

    return 0;
}
