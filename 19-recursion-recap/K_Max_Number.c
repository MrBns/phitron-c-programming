#include <stdio.h>
#include <string.h>
#include <limits.h>

int max(int arr[], int i, int n)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int other_max = max(arr, i + 1, n);

    if (arr[i] > other_max)
    {
        return arr[i];
    }
    else
    {
        return other_max;
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", max(arr, 0, n));

    return 0;
}