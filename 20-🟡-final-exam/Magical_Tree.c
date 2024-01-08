#include <stdio.h>
#include <string.h>

void print_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
}
void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void printing_upper_of_tree(int line)
{
    int star = 1;
    int space = line-1;

    for (int i = 0; i < line; i++)
    {
        print_space(space);
        print_star(star);
        printf("\n");
        space--;
        star += 2;
    }
}

void printing_lower_of_tree(int n, int base)
{
    for (int i = 0; i < base; i++)
    {
        print_space(base);
        print_star(n);
        printf("\n");
    }
}

int main()
{
    int n;
    int base = 5;
    scanf("%d", &n);

    printing_upper_of_tree(base + (n / 2 + 1));
    printing_lower_of_tree(n, base);

    return 0;
}