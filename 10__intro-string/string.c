#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    fgets(str,12, stdin);
    printf("%s", str);

    return 0;
}