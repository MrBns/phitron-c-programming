#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        while (x != 0)
        {
            printf("%d ", x % 10);
            x = x / 10;
        }
        printf("\n");
    }

    return 0;
}