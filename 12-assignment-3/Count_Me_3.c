#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[10001];
        scanf("%s", str);

        int small = 0, capital = 0, digit = 0;

        for (int j = 0; str[j] != '\0'; j++)
        {
            char c = str[j];

            if (c >= 'a' && c <= 'z')
            {
                small++;
            }
            else if (c >= 'A' && c <= 'Z')
            {
                capital++;
            }
            else if (c >= '0' && c <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}