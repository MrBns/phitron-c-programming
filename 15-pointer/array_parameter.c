#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void print_arr(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", i[a]);
    }
}

int main()
{
    int arr[0xfffff] = {0};

    print_arr(arr, 0xfffff);

    return 0;
}