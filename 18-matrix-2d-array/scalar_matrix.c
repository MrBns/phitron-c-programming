#include <stdio.h>
#include <string.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int mtx[row][col];
    int valid = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
    }

    if (row != col)
    {
        valid = 0;
    }

    for (int i = 0; i < row; i++)
    {
        if (!valid)
        {
            valid;
        }

        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (mtx[0][0] != mtx[i][j])
                {
                    valid = 0;
                }

                continue;
            }

            if (mtx[i][j] != 0)
            {
                valid = 0;
            }
        }
    }

    if (valid)
    {
        printf("Valid");
    }
    else
    {
        printf("InValid");
    }

    return 0;
}