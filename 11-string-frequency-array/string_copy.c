#include <stdio.h>
#include <string.h>

int main()
{

    char main_str[] = "My name is Nazmul";

    char copied_str[strlen(main_str)];

    for (int i = 0; main_str[i] != '\0'; i++)
    {
        copied_str[i] = main_str[i];
    }

    printf("%s", copied_str);

    return 0;
}