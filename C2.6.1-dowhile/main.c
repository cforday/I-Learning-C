#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,sayim;

    printf("bir sayi giriniz: ");
    scanf("%d",&sayim);

    do
    {
        printf("%d\n",i*sayim);
        i++;
    }
    while(i<=10);
    return 0;
}
