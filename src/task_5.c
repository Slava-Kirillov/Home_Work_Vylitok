#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int N, i, j, flag, delta = 10, count = 0;
    FILE *file;
    char *word;
    if (argc > 2) {
        word = argv[1];
        for (j = 2; j < argc; j++) {
            file = fopen(argv[j], "r");
            if (file == NULL) {
                printf("Can't read file %s\n", argv[j]);
                exit(1);
            }
            while (1) {
                N = 10;
                i = flag = 0;
                char *buf = (char *) malloc(sizeof(char) * N);
                while ((buf[i] = (char) fgetc(file)) != '\n' && buf[i] != EOF) {
                    if (++i >= N) {
                        N += delta;
                        buf = (char *) realloc(buf, sizeof(char) * N);
                    }
                }
                if (feof(file)) break;
                buf[i] = '\0';
                int l_buf = (int) strlen(buf);
                int l_word = (int) strlen(word);
                while (1) {
                    if (l_buf - 1 == -1) break;
                    if (buf[l_buf - 1] == ' ' && flag != 1) {
                        l_buf -= 1;
                        continue;
                    }
                    if ((word[l_word - 1] == buf[l_buf - 1]) && (l_word - 1) != -1) {
                        l_buf -= 1;
                        l_word -= 1;
                        flag = 1;
                        continue;
                    }
                    break;
                }
                if (l_buf - 1 != -1 && (l_word - 1) == -1 && buf[l_buf - 1] == ' ') count += 1;
                free(buf);
            }
            fclose(file);
        }
        printf("count = %d", count);
    } else {
        printf("Not enough arguments\n");
    }
}

