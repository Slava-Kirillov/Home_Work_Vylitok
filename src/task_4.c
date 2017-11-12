#include <stdio.h>

#define N 3

void swapElem(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapDiag(int (*matrix)[N]){
    int i;
    for(i = 0; i < N; i++){
        swapElem(&matrix[i][i], &matrix[N-(i + 1)][i]);
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
    swapDiag(mat);
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

