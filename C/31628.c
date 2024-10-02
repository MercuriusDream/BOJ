#include <stdio.h>
#include <string.h>
#define MAX 10

char color[MAX][MAX][9];
int main(){
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            scanf("%s", color[i][j]);
        }
    }

    int flag = 1;
    for(int i=0;i<MAX;i++){
        flag = 1;
        for(int j=0;j<9;j++){
            if (strcmp(color[i][j], color[i][j+1])) flag=0;
        }
        if (flag){
            putchar('1');
            return 0;
        }
    }

    for(int i=0;i<MAX;i++){
        flag = 1;
        for(int j=0;j<9;j++){
            if (strcmp(color[j][i], color[j+1][i])) flag=0;
        }
        if (flag){
            putchar('1');
            return 0;
        }
    }

    putchar('0');
    return 0;
}