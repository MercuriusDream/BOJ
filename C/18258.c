#include <stdio.h>
#include <string.h>

#define MAX 2000001
int queue[MAX];
int idx_front = 0, idx_back = 0;
int size = 0;

int main(){
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        queue[i] = i;
    }

    idx_back = 1;
    idx_front = n;

    while (idx_back != idx_front){
        queue[idx_back++] = queue[idx_front--];
    }

    printf("%d", queue[idx_back]);
    return 0;
}