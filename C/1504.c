#include <stdio.h>

#define MAX 801
#define INF 7990001

int dist[MAX][MAX];

int main(){
    int n,w;
    scanf("%d %d",&n, &w);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) dist[i][j] = (i==j) ? 0 : INF; 
    }

    int from, dest, price;
    for (int i=0;i<w;i++){
        scanf("%d %d %d", &from, &dest, &price);
        dist[from][dest] = dist[dest][from] = price;
    }

    for (int k=1;k<=n;k++){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (dist[i][j] > dist[i][k] + dist[k][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int first, second;
    scanf("%d %d", &first, &second);

    int a = dist[1][first] + dist[first][second] + dist[second][n], b = dist[1][second] + dist[second][first] + dist[first][n];
    if ((dist[1][first] == INF || dist[first][second] == INF || dist[second][n] == INF) && (dist[1][second] == INF || dist[second][first] == INF || dist[first][n] == INF)) printf("-1");
    else printf("%d", (a>b) ? b:a);
    return 0;
}