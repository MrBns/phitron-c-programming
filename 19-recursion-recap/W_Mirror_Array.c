#include <stdio.h>
#include <string.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int mtx[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            printf("%d ", mtx[i][j]);
        }
        printf("\n");
    }

    return 0;
}