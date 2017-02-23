#include <stdio.h>
#include <stdlib.h>

int main()
{
    char school[20], name[20];
    int number;

    printf("Please enter the school, name,and number in order:\n");
    scanf("%s %s %d", school, name, &number);

    printf("Your school \t=\t %s\n", school);
    printf("Your name \t=\t %s\n", name);
    printf("Your number \t=\t %d\n", number);

    system("pause");
    return 0;
}