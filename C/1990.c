#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000000

int n[MAX] = {0,};

int main(){
    int a,b,len,flag;
    
    scanf("%d %d",&a, &b);
    n[0]=n[1]=1;

    if (a >= MAX){
        printf("-1");
        return 0;
    }
    if (b >= MAX) b = MAX - 1;

    for(int i=2;i*i<=b;i++){
        for(int j=2*i;j<=b;j+=i){
            n[j] = 1;
        }
    }

    char s[11];
    for (int i=a;i<=b;i++){
        flag = 0;
        if (n[i]) continue;

        sprintf(s, "%d", i);
        len = strlen(s);

        for(int j=0;j<len/2;j++){
            if (s[j] != s[len-1-j]){
                flag = 1;
                break;
            }
        }

        if (!flag) printf("%d\n", i);
    }
    printf("-1");
    return 0;
}