#include <stdio.h>

void rotate90(int n, int mat[n][n]) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int tmp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = tmp;
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0, k = n-1; j < k; j++, k--) {
            int tmp = mat[i][j];
            mat[i][j] = mat[i][k];
            mat[i][k] = tmp;
        }
    }
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    rotate90(3,mat);
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%d ", mat[i][j]); printf("\n"); }
    return 0;
}
