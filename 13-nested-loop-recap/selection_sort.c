#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int val[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (val[i] > val[j])
            {
                int tmp = val[i];
                val[i] = val[j];
                val[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", val[i]);
    }

    return 0;
}