#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    scanf("%s", str);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);
    printf("\n%d\n", strlen(str));

    return 0;
}