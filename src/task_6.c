#include <stdio.h>

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
    char array[11] = {'a','a','a','b','b','c','a','d','d','c','c'};
    delDupChar(array);
    int i;
    for (i = 0; i < 10; i++){
        printf("%c ", array[i]);
    }
    printf("\n");
}
