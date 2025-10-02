#include <stdio.h>
#include <string.h>

void multiplyPoly(int A[], int n, int B[], int m, int res[]) {
    for(int i=0;i<n+m-1;i++) res[i]=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            res[i+j]+=A[i]*B[j];
}

int main(){
    int A[]={1,2,3}; // 1+2x+3x^2
    int B[]={4,5};   // 4+5x
    int res[10];
    multiplyPoly(A,3,B,2,res);
    for(int i=0;i<4;i++) printf("%dx^%d ",res[i],i);
    return 0;
}
