#include <stdio.h>
#include <string.h>

int main()
{

    int n, l = 10;
    scanf("%d", &n);

    int f_arr[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int d;
        scanf("%d", &d);

        f_arr[d]++;
    }

    for (int i = 0; i < l; i++)
    {
        printf("cnt[%d] = %d\n", i, f_arr[i]);
    }

    return 0;
}