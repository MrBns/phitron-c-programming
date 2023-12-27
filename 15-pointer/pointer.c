#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_p(int *p)
{
    printf("in function %p \n", p);
    *p = 2000;
}

int main()
{

    int value = 100;
    int *valueP = &value;
    int *valueP2 = valueP;
    int *dynValue = malloc(sizeof(int));
    dynValue = valueP;

    printf("%p \n", &value);
    printf("%p \n", valueP);

    printf("%p \n", valueP2);
    printf("Occufied by malloc %p \n", dynValue);

    printf("value before  function %d\n", *valueP2);
    get_p(&value);
    printf("value after function %d\n", *valueP);

    return 0;
}