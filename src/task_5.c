#include <stdio.h>
#include <string.h>

#define N 1024

int main(int argc, char* argv[]){
    static int count = 0;
    FILE *file;
    char str[N];
    int i;
    char *word;
    if (argc > 2) {
        word = argv[1];
        for (i = 2; i < argc; i++) {
            file = fopen(argv[i],"r");
            if (file == NULL){
                printf("Ошибка чтения файла\n");
                break;
            }
            while (fgets(str, N, file) != NULL){
                int flag = 1;
                int j;
                int n = -1;
                size_t l = strlen(str);
                for (j = 0; j < l; j++){
                    if (str[j] == ' ' && str[j+1] != ' ' && str[j+1] != '\n') n = j;
                }
                n+=1;
                int k = 0;
                while (word[k] != '\0'){
                    if (word[k] != str[n+k]) {
                        flag = 0;
                        break;
                    }
                    k++;
                }
                if (flag == 1 && (str[n+k] == '\n' || str[n+k] == ' ')) count += 1;
            }
        }
        printf("count = %d\n", count);
    } else { printf("Мало аргуметнов\n"); }
}

