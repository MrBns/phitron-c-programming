#include <stdio.h>
#include <string.h>

void print_digit(n)
{
    if (n == 0)
        return;

    print_digit(n / 10);
    printf("%d ", n % 10);
}

// 1. N=39 -> base 39==0 : false -> print* 39%10=

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0\n");
            continue;
        }

        print_digit(n);
        printf("\n");
    }

    return 0;
}