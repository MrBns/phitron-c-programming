#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort_array(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {

        int n;
        scanf("%d", &n);

        int arr[n];
        int arr_B[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            arr[i] = x;
            arr_B[i] = x;
        }

        sort_array(arr_B, n);

        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(arr[i] - arr_B[i]));
        }

        printf("\n");
    }
    return 0;
}