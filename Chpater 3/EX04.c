#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;
    int mile, yard;

    printf("km = ");
    scanf("%f", &km);
    
    mile = km / 1.609;
    yard = ((km / 1.609) - mile) * 1760;

    printf("mile = %d\n", mile);
    printf("yard = %d\n", yard);
    
    system("pause");
    return 0;
}