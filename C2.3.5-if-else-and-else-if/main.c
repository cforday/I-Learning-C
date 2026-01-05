#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d",&yas);

    if(yas>=18)
    {
        printf("Yasiniz oy kullanmaya yetiyor");
    }
    else
    {
        printf("Yasiniz uygun degil %d sene sonra geliniz",18-yas);
    }
    return 0;
}
