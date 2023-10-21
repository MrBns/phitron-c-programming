#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int n;
        scanf("%d", &n);

        int arr[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int x;
        scanf("%d", &x);

        int is_found = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                is_found = 1;
                break;
            }
        }

        if (is_found == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}