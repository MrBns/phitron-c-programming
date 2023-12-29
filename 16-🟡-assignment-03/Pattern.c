#include <stdio.h>
#include <string.h>

void print_hyphen(int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("-");
    }
}

void print_space(int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" ");
    }
}

void print_hash(int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("#");
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int sym = 1;
    int space = n - 1;

    for (int i = 0; i < (n * 2) - 1; i++)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < sym; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");

        if (i < n - 1)
        {
            sym += 2;
            space--;
        }
        else
        {
            sym -= 2;
            space++;
        }
    }
}