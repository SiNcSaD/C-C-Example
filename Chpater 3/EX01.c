#include <stdio.h>
#include <stdlib.h>

int main()
{
    char words[5];
    scanf("%s", words);
    for (int i = sizeof(words) / sizeof(words[0]); i > 0; i--)
    {
        printf("%c", words[i-1]);
    }
    printf("\n");
    system("pause");
    return 0;
}