#include <stdio.h>

#define MAX 501
#define INF 500000001
int dist[MAX][MAX];

int main(){
    int n,m;
    scanf("%d %d",&n, &m);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) scanf("%d", &dist[i][j]);
    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if (dist[i][j] > dist[i][k] + dist[k][j]) dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int a,b,c;
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&a,&b,&c);
        if (dist[a][b] <= c) printf("Enjoy other party\n");
        else printf("Stay here\n");
    }
    
    return 0;
}