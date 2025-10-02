#include <stdio.h>

int countZeros(int n, int mat[n][n]){
    int count=0;
    int i=0, j=n-1;
    while(i<n && j>=0){
        if(mat[i][j]==0){
            count += j+1; 
            i++;
        } else {
            j--;
        }
    }
    return count;
}

int main(){
    int mat[3][3]={{1,1,0},{1,0,0},{0,0,0}};
    printf("Zeros=%d\n",countZeros(3,mat));
    return 0;
}
