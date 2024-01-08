#include <stdio.h>
#include <string.h>

void print_n4_number()
{

    long long int m;
    long long int n1, n2, n3;
    scanf("%lld %lld %lld %lld", &m, &n1, &n2, &n3);

    if(m==0){
        printf("0\n");
        return;
    }

    long long int s_o_3 = n1 * n2 * n3;

    long long int n4 = m / s_o_3;

    if (n1 * n2 * n3 * n4 == m)
    {
        printf("%lld\n", n4);
    }
    else
    {
        printf("-1\n");
    }
}

int main()
{

    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        print_n4_number();
    }
    return 0;
}