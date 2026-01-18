#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int age;
    bool isAdult=false;
    printf("Age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        isAdult=true;
    }
    if(isAdult)
    {
        printf("18 yas ustu");
    }
    else
    {
        printf("18 yas alti");
    }

    return 0;
}
