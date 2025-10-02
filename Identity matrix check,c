#include <stdio.h>

int isIdentity(int n, int mat[n][n]){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0))
                return 0;
    return 1;
}

int main(){
    int mat[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    if(isIdentity(3,mat)) printf("Identity\n");
    else printf("Not identity\n");
    return 0;
}
