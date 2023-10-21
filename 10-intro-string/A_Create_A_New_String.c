#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1000];
    char str2[1000];
    
    scanf("%s %s", str1, str2);

    printf("%zu %zu\n", strlen(str1), strlen(str2));
    printf("%s %s", str1, str2);
    return 0;
}