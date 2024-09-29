#include <stdio.h>
#include <stdlib.h>

#define INF 101
#define MAX 101

int dist[MAX][MAX];
int main(){
    int n, start, end;
    scanf("%d", &n);
    scanf("%d %d", &start, &end);

    int m;
    scanf("%d", &m);

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dist[i][j] = INF;
        }
    }

    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d %d", &a, &b);
        dist[a][b] = 1;
        dist[b][a] = 1;
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

    int d = dist[start][end];
    if (d==INF) printf("-1");
    else printf("%d", d);
    return 0;
}