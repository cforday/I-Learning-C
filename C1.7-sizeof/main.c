#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intsayi=4;
    float floatsayi=5.2;
    double doublesayi=2.5;
    char karakter='c';

    printf("int hafizada %d kadar yer tutar\n",sizeof(intsayi));
    printf("float hafizada %d kadar yer tutar\n",sizeof(floatsayi));
    printf("double hafizada %d kadar yer tutar\n",sizeof(doublesayi));
    printf("char hafizada %d kadar yer tutar\n",sizeof(karakter));
    return 0;
}
