#include <stdio.h>
#include <string.h>

int main()
{

    char str[10001];
    scanf("%s", str);

    int cnt['z' - 'a'] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        cnt[str[i] - 'a']++;
    }

    for (int i = 0; i <= 'z' - 'a'; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}