#include <stdio.h>
#include <string.h>

void print_a(int arr[], int n, int i)
{
    if (i < 0)
    {
        return;
    }
    printf(" arr[%d] == %d\n", i, arr[i]);
    print_a(arr, n, i-1);
}

int main()
{

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    print_a(arr, n, n-1);

    return 0;
}