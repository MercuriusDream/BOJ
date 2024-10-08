#include <stdio.h>
#define INF 101
#define MAX 101
int dist[MAX][MAX];

int main(){
    int n;
    int tmp;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &tmp);
            if (!tmp) dist[i][j] = INF;
            else dist[i][j] = tmp;
        }
    }

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", !(dist[i][j]==INF));
        }
        printf("\n");
    }
    return 0;
}