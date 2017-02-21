#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    scanf("%d", &number);
    
    printf("Dec:%d\n",number);
    printf("Oct:%o\n",number);
    printf("Hex:%x\n",number);
    
    system("pause");
    return 0;
}