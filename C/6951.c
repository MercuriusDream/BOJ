#include <stdio.h>

#define MAX 101
#define INF 50001

int dist[MAX][MAX];
int main(){
    int n,w,p;
    scanf("%d %d %d",&n, &w, &p);
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

    for (int i=0;i<p;i++){
        scanf("%d %d", &from, &dest);
        printf("%d\n", dist[from][dest]);
    }
    return 0;
}