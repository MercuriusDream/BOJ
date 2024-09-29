#include <stdio.h>
#include <string.h>
#include <malloc.h>

int solve(){
    int n,k,t,m;
    scanf("%d %d %d %d",&n, &k, &t, &m);

    int j = (int*)calloc(m,sizeof(int));
    int s = (int*)calloc(m,sizeof(int));

    for(int i=0;i<m;i++){
        int tmp_i, tmp_j, tmp_s;
        scanf("%d %d %d",&tmp_i, &tmp_j, &tmp_s);
        
    }
    return 0;
}
int main(){
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) solve();
    return 0;
}