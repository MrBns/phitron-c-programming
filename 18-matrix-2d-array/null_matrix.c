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

    int cnt = 0;
    int isZeroMtx = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // if(mtx[i][j]==0){
            //     cnt++;
            // }
            cnt++;
            if (mtx[i][j] != 0)
            {
                isZeroMtx = 0;
                break;
            }
        }
        if (!isZeroMtx)
            break;
        ;
    }

    // printf("%d", cnt);
    if (isZeroMtx)
    {
        printf("Valid");
    }
    else
    {
        printf("InValid");
    }
    // printf("loop run %d", cnt);

    return 0;
}