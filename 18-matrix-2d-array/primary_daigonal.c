
#include <stdio.h>
#include <string.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);
    int mtx[row][col];
    int is_primary_diagonal = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    if (row != col)
    {
        is_primary_diagonal = 0;
    }

    for (int i = 0; i < row; i++)
    {
        if (!is_primary_diagonal)
            break;
        ;

        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (mtx[i][j] != 0)
            {
                is_primary_diagonal = 0;
                break;
            }
        }
    }

    if (is_primary_diagonal)
    {
        printf("Valid");
    }
    else
    {
        printf("InValid");
    }

    return 0;
}