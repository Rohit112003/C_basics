#include<stdio.h>
//check 2d
checkmulArray(int *n, int *m, int *o, int *w, int ** matrix, int ** matrix2){
    int newmatrix[n][m];
    
}
int main(){
    int n , m , o, w;
    scanf("%d %d %d %d", n m o,w);
    int matrix[n][m];
    int matrix2[o][w];
    for(int i =0; i<n;i++){
        for(int j =0;j<m;j++){
            scanf("%d", matrix[i][j]);
        }
    }
    for(int i =0; i<n;i++){
        for(int j =0;j<m;j++){
            scanf("%d", matrix2[i][j]);
        }
    }
    checkmulArray(n,m,o,w,matrix,matrix2);


}