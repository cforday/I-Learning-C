#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    for(int i=0;i<=sayi;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}
