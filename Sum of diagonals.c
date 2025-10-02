#include <stdio.h>

int sumDiagonals(int n, int mat[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];               // primary
        if (i != n-1-i) sum += mat[i][n-1-i]; // secondary
    }
    return sum;
}

int main() {
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("Sum: %d\n", sumDiagonals(3,mat));
    return 0;
}
