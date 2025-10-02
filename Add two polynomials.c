#include <stdio.h>
#include <string.h>

#define MAX 100

void addPoly(int A[], int B[], int n, int res[]) {
    for (int i=0;i<n;i++) res[i]=A[i]+B[i];
}

int main() {
    int A[5]={3,0,2,5,0}; // coeffs
    int B[5]={1,2,3,0,4};
    int res[5];
    addPoly(A,B,5,res);
    for(int i=0;i<5;i++) printf("%dx^%d ",res[i],i);
    return 0;
}
