#include <stdio.h>
#include <string.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        if (m2 == 0)
        {
            printf("%d\n", 0);
            continue;
        }

        int days_for_one = m1 * d;
        int day_with_extra = days_for_one / (m1 + m2);

        printf("%d \n", d - day_with_extra);
    }

    return 0;
}