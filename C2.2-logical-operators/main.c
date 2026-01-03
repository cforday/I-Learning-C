#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    && Ve
    || yada
    ! değil
    */

    int x=15;
    int y=25;

    printf("%d\n",x>10 && x<10);
    printf("%d\n",y>10 || y<15);
    printf("%d\n",!(x>10 && x<10));

    return 0;
}
