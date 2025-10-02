#include <stdio.h>

void transpose(int m, int n, int mat[m][n], int res[n][m]) {
    for (int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            res[j][i] = mat[i][j];
}

int main() {
    int mat[2][3]={{1,2,3},{4,5,6}}, res[3][2];
    transpose(2,3,mat,res);
    for(int i=0;i<3;i++){ for(int j=0;j<2;j++) printf("%d ",res[i][j]); printf("\n");}
    return 0;
}
