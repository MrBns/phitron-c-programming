#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        arr[i] = t;
    }

    int x, v=0;
    scanf("%d %d", &x, &v);
    arr[x] = v;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}