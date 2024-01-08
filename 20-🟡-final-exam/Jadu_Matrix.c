#include <stdio.h>
#include <string.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int mtx[row][col];

    if (row != col)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    int isValid = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            // checking primary diagonal;
            if (i == j)
            {
                if (mtx[i][j] != 1)
                {
                    isValid = 0;
                    break;
                }

                continue;
            }

            // Checking secondary diagonal
            if (row - 1 == i + j)
            {
                if (mtx[i][j] != 1)
                {

                    isValid = 0;
                    break;
                }

                continue;
            }

            // Checking element without Diagonal
            if (mtx[i][j] != 0)
            {
                isValid = 0;
                break;
            }
        }
    }

    if (isValid)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}