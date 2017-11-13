#include <stdio.h>

#define N 3

void swapDiag(int (*matrix)[N]){
    int i, temp;
    for(i = 0; i < N; i++){
        temp = matrix[i][i];
        matrix[i][i] = matrix[N-(i + 1)][i];
        matrix[N-(i + 1)][i] = temp;
    }
}

void main(){
    int i, j;
    int mat[N][N] = {
            {1,2,3},
            {5,6,7},
            {9,10,11},
    };
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    swapDiag(mat);
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

