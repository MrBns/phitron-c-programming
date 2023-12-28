#include <stdio.h>
#include <string.h>

void print_(int i){
    if(i>5){
        return;
    }
    printf("%d", i);
    print_(i+1);
}

int main(){
    print_(2);
    return 0;
}