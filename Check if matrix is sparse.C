#include <stdio.h>

int isSparse(int m, int n, int mat[m][n]) {
    int zero = 0, total = m*n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j]==0) zero++;
    return (zero > total/2);
}

int main(){
    int mat[3][3]={{0,0,1},{0,0,0},{1,0,0}};
    if(isSparse(3,3,mat)) printf("Sparse\n"); else printf("Not sparse\n");
    return 0;
}
