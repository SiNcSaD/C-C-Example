#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5], sum = 0;
    float avg = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    
    avg = sum / 5.0;

    printf("sum = %d\n", sum);
    printf("avg = %5.2f\n", avg);

    system("pause");
    return 0;
}