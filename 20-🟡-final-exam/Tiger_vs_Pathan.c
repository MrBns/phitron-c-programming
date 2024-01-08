#include <stdio.h>
#include <string.h>

int main()
{


    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {

        int n;
        scanf("%d", &n);
        int pathan = 0, tiger = 0;
        char str[n + 1];
        scanf("%s", str);

        for (int i = 0; i < n; i++)
        {
            char c = str[i];

            if (c == 'T')
            {
                tiger++;
            }
            else if (c == 'P')
            {
                pathan++;
            }
        }

        if (pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}