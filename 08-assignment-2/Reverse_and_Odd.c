#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    // taking input;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }

    // Printing index in reverse order;

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}