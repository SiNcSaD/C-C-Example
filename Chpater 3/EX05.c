#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;

    printf("c = ");
    scanf("%f", &c);
    
    f = (c * 9.0 / 5.0) + 32;
    
    printf("f = %5.2f\n", f);
    
    system("pause");
    return 0;
}