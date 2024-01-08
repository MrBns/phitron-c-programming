#include <stdio.h>
#include <string.h>

int main()
{

    int r, c;
    scanf("%d %d", &r, &c);

    int mtx_a[r][c];
    int mtx_b[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mtx_a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mtx_b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mtx_a[i][j] + mtx_b[i][j]);
        }
        printf("\n");
    }

    return 0;
}