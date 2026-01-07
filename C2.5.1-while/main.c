#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i=1;

    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    while(i<=10)
    {
        printf("%d\n",sayi*i);
        i++;
    }

    return 0;
}
