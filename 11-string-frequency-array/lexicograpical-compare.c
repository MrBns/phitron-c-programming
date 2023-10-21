#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    char str2[100];

    scanf("%s %s", str, str2);
    for (int i = 0; 1; i++)
    {
        char c1 = str[i];
        char c2 = str2[i];

        // Checking if any Character Goes mismatch first and detecting
        if (c1 < c2)
        {
            printf("A is Smaller");
            break;
        }
        else if (c1 > c2)
        {
            printf("B is Smaller");
            break;
            ;
        }

        if (c1 == '\0' && c2 == '\0')
        {
            printf("Same");
            break;
        }
        else if (c1 == '\0')
        {
            printf("A Smaller\n");
            break;
        }
        else if (c2 == '\0')
        {
            printf("B Smaller");
            break;
        }
    }

    return 0;
}