#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int star = 1, space = n - 1;

    for (int i = 0; i < (2 * n) - 1; i++)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i < n - 1)
        {
            star += 2;
            space--;
        }
        else
        {
            star -= 2;
            space++;
        }
    }

    return 0;
}