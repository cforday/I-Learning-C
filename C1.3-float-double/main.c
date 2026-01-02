#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int (4 Byte) %d
    float (4 byte) %f
    double (8 Byte) %lf
    char (1 byte) %c
    */

    float n1=3.2;
    double n2=3.5;

    //.'dan sonra sıfırları silmek için .2f olarak kullanırız
    printf("%.2f %.2lf",n1,n2);
    return 0;
}
