#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int str_cnt[26] = {0,};
    
    int n, max, max_index;
    scanf("%d", &n);
    getchar();
    for(int i=0;i<n;i++){
        char str[256];
        for(int j=0;j<26;j++) str_cnt[j]=0;
        fgets(str, 256, stdin);
        int idx =0;
        for(int j=0;j<strlen(str);j++){
            if (str[j] != ' ') str_cnt[str[j] - 'a']++;
        }

        max = 0;
        max_index = 0;
        
    for(int j = 0; j < 26; j++) {
        if (str_cnt[j] > max) {
            max = str_cnt[j];
            max_index = j;
        } else if (str_cnt[j] == max) {
            max_index = -1;
        }
    }
        if (max_index == -1) {
            printf("?\n");
        } else {
            printf("%c\n", max_index + 'a');
        }
    }
    return 0;
}