#include <stdio.h>
#include <stdlib.h>

#define INF 39600001
#define MAX 401

int dist[MAX][MAX];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int a,b,c;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            dist[i][j] = INF;
        }
    }

    for(int i=1; i<=m; i++){
        scanf("%d %d %d", &a, &b, &c);
        dist[a][b] = c;
    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if (dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int min = INF;
    for(int i=1;i<=n;i++){
        if (dist[i][i] < min){
            min = dist[i][i];
        }   
    }

    if (min==INF+1) printf("-1");
    else printf("%d",min);
    return 0;
}