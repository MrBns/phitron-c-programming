#include <stdio.h>
#include <string.h>

int main()
{

    int i;
    int is_found = 0;
    while (scanf("%d", &i) != EOF)
    {
        if (i == 1999)
        {
            printf("Correct\n");
            is_found = 1;
        }
        else
        {
            printf("Wrong\n");
        }

        if (is_found == 1)
        {
            break;
            ;
        }
    }
    return 0;
}