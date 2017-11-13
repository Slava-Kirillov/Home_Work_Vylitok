#include <stdio.h>

#define N 11

void delDupChar(char *list){
    int i,j;
    i = 0;
    while (list[i+1] != '\0'){
        if (list[i] == list[i+1]){
            j = i;
            while (list[j+1] != '\0'){
                list[j] = list[j+1];
                j++;
            }
            list[j] = '\0';
            continue;
        }
        i++;
    }
}

void main(){
    int i;
    char array[N] = {'a','a','a','b','b','c','a','d','d','c','c'};
    for (i = 0; i < N; i++){
        printf("%c ", array[i]);
    }
    printf("\n");
    delDupChar(array);
    for (i = 0; i < N; i++){
        printf("%c ", array[i]);
    }
    printf("\n");
}
