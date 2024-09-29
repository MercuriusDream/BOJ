#include <stdio.h>
#define MAX 200001
int logs[MAX] = {0,};

int main(){
    int n,a,b;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        if (b) logs[a]++;
        else logs[a]--;
    }

    int sum=0;
    for (int i=1;i<MAX;i++){
        if (logs[i] != 0) sum++;
    }
    printf("%d", sum);
    return 0;
}