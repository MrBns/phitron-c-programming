#include <stdio.h>
#include <string.h>

// str = Nazmul
int length(char str[], int i)
{
    if (str[i] == '\0')
        return 0;

    return length(str, i + 1) + 1;
};

int main()
{
    printf("%d", length("Nazmul",0));
    return 0;
}