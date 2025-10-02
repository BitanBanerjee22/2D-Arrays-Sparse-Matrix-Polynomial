#include <stdio.h>

void spiralPrint(int m, int n, int arr[m][n]) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) printf("%d ", arr[top][i]);
        top++;
        for (int i = top; i <= bottom; i++) printf("%d ", arr[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) printf("%d ", arr[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) printf("%d ", arr[i][left]);
            left++;
        }
    }
}

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    spiralPrint(3,3,mat);
    return 0;
}
