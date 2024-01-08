#include <stdio.h>
#include <string.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int mtx[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    // printing last row;
    for (int i = 0; i < col; i++)
    {
        printf("%d ", mtx[row - 1][i]);
    }

    printf("\n");

    // printing last row;
    for (int i = 0; i < row; i++)
    {
        printf("%d ", mtx[i][col - 1]);
    }
    return 0;
}