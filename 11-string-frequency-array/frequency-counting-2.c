#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000];
    scanf("%s", str);
    int cnt['z' - 'a'] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        cnt[str[i] - 'a']++;
    }

    // printing array - cnt
    for (int i = 0; i < 'z' - 'a'; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c = %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}