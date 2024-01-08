#include <stdio.h>
#include <string.h>

int count_vowel(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    char c = str[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1 + count_vowel(str, i + 1);
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {

        return 1 + count_vowel(str, i + 1);
    }
    else
    {
        return count_vowel(str, i + 1);
    }
}

int main()
{

    char str[205];
    fgets(str, 205, stdin);

    printf("%d", count_vowel(str, 0));
    return 0;
}