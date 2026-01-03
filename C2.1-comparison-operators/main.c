#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    == eşit midir?
    != eşit değilmidir
    > büyük mü? < küçük mü?
    >= büyük eşit mi= <= büyük eşit mi?
    */

    int x=25;
    int y=15;

    //printf("%d",x==y); 0 Cevabı
    //printf("%d",x!=y); 1 Cevabı
    //printf("%d",x>y); 1 cevabı
    //printf("%d",x<y); 0 cevabı
    printf("%d",x>=y); // 1 cevabı
    return 0;
}
