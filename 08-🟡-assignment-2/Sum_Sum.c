#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int sum_pos = 0;
    int sum_neg = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        scanf("%d", &x);

        if (x >= 0)
        {
            sum_pos += x;
        }
        else
        {
            sum_neg += x;
        }
    }

    printf("%d %d", sum_pos, sum_neg);

    return 0;
}