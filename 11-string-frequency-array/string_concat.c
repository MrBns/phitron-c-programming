#include <stdio.h>
#include <string.h>

int main()
{

    char str[200], str2[100];
    scanf("%s %s", str, str2);

    int k = strlen(str);
    for (int i = 0; i < strlen(str2); i++)
    {
        str[k] = str2[i];
        k++;
    }

    printf("%s", str);

    return 0;
}