#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[5], sum, avg;
    num[5] = 0;
    sum = 0;
    avg = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &num[i]);
        sum += num[i];
    }
    
    avg = sum / 5.0;

    printf("sum = %5.2f\n", sum);
    printf("avg = %5.2f\n", avg);

    system("pause");
    return 0;
}