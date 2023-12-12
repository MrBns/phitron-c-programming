#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int val[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val[i]);
    }

    int x;
    scanf("%d", &x);

    int is_found = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (is_found == 1)
        {
            break;
        }
        for (int j = i + 1; j < n; j++)
        {
            printf("%i=== %i\n", val[i], val[j]);

            if (x == val[i] + val[j])
            {
                printf("%i ==> %i,%i \n", x, val[i], val[j]);
                is_found = 1;
                break;;
            }
        }
    }

    return 0;
}