#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void dfs(int a[], int l, int n, int m){
    if (l == m){
        for(int i=0;i<m-1;i++){
            printf("%d ",a[i]);
        }
        printf("%d\n",a[m-1]);
        return;
    }
    for(int i=1;i<n+1;i++){
        a[l] = i;
        l++;
        dfs(a, l, n, m);
        l--;
    }
}
int main(){
    int n,m,l;
    scanf("%d %d", &n, &m);
    int *a = (int*)calloc(m, sizeof(int));

    l = 0;
    dfs(a, l, n, m);
    free(a);
    return 0;
}