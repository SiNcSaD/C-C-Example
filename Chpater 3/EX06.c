#include <stdio.h>
#include <stdlib.h>

#define rate 0.05

int main()
{
    int Hours, weight;
    int income; // 收入
    int get;    // 淨利潤
    int tax;    // 稅金

    /// 輸入工作時數
    printf("Hours = ");
    scanf("%d", &Hours);

    /// 輸入每小時時薪
    printf("weight = ");
    scanf("%d", &weight);

    income = Hours * weight;
    tax = income * rate;
    get = income - tax;

    printf("income = %d\n", income);
    printf("get = %d\n", get);
    printf("tax = %d\n", tax);

    system("pause");
    return 0;
}