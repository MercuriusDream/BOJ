#include <stdio.h>
#include <string.h>
#define MAX 26
char words[MAX] = {0,};

void words_clear(){
    for(int i=0;i<MAX;i++) words[i] = 0;
    return;
}

int main(){
    int n, len, flag, sum = 0;
    char word[101], last_chr, curr_chr;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        flag = 1;
        words_clear();
        scanf("%s", word);
        len = strlen(word);

        for(int j=0;j<len;j++){
            if (!j) {
                curr_chr = word[j];
                continue;
            }

            last_chr = curr_chr;
            curr_chr = word[j];

            if (last_chr != curr_chr){
                if (words[curr_chr-97]){
                    flag = 0;
                    break;
                }
                words[last_chr-97] = 1;
            }
        }
        sum += flag;
    }

    printf("%d", sum);
    return 0;
}