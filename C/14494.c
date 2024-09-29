#include <stdio.h>
#define INF 1000000007
#define MAX 1001

long long dp[MAX][MAX];

int main(){
    int a,b;
    scanf("%d %d",&a, &b);

    for(int i=1;i<MAX;i++) dp[1][i] = dp[i][1] = 1;
    for(int i=2;i<=a;i++){
        for(int j=2;j<=b;j++){
            dp[i][j] = (dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1])%INF;
        }
    }

    printf("%lld", dp[a][b]);
    return 0;
}