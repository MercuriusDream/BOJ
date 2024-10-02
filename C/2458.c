#include <stdio.h>
#define MAX 501
#define INF 49501

int dist[MAX][MAX];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j) dist[i][j]=0;
            else dist[i][j]=INF;
        }
    }

    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a, &b);
        dist[a][b] = 1;
    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int sum=0;
    int flag=1;
    for(int i=1;i<=n;i++){
        flag = 1;
        for(int j=1;j<=n;j++){
            if (dist[i][j] == INF && dist[j][i] == INF){
                flag=0;
                break;
            }
        }
        sum+=flag;
    }

    printf("%d" ,sum);
    return 0;
}