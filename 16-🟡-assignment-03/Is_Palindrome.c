#include <stdio.h>
#include <string.h>

int is_palindrome(char *str)
{

    int i = 0;
    int j = strlen(str) - 1;
    int isPalindrome = 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
        }
        i++;
        j--;
    }
    return isPalindrome;
}

int main()
{

    char str[1001];
    scanf("%s", str);

    if (is_palindrome(str))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}