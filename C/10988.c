#include <stdio.h>
#include <string.h>

char word[101];

int main(){
    scanf("%s", word);
    int len = strlen(word);
    int flag = 0;

    for(int i=0;i<(len/2);i++){
        if (word[i] != word[len-i-1]){
            flag = 1;
            break;
        }
    }
    putchar(!(flag)+48);
    return 0;
}