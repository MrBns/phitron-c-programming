#include <stdio.h>
#include <string.h>

int main(){

    int n,m;
    scanf("%d %d", &n,&m);

    int mtx[n][m];

    for(int i =0;i<n;i++){
        for(int j=0; j<m; j++){
            scanf("%d", &mtx[i][j]);
        }
    }

    int e;
    scanf("%d",&e);

    printf("e == %d", e);
    for( int i =0; i<n;i++){
        printf("%d \t",mtx[i][e]);
    }
    

    return 0;
}