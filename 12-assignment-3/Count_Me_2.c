#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000001];
    scanf("%s", str);

    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}