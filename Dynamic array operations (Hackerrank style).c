#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=2, q=5;
    int *arr[n];
    int size[n];
    for(int i=0;i<n;i++){ arr[i]=malloc(sizeof(int)*100); size[i]=0; }
    int lastAnswer=0;
    int queries[5][3]={{1,0,5},{1,1,7},{1,0,3},{2,1,0},{2,1,1}};
    for(int k=0;k<q;k++){
        int t=queries[k][0], x=queries[k][1], y=queries[k][2];
        int idx=(x^lastAnswer)%n;
        if(t==1){
            arr[idx][size[idx]++]=y;
        } else {
            lastAnswer=arr[idx][y%size[idx]];
            printf("%d\n",lastAnswer);
        }
    }
    return 0;
}
