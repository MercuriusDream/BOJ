#include <stdio.h>
#include <stdlib.h>

int a[1000001] = {0,};

int era(int N){
    a[0]=a[1]=1;
    for(int i=2;i<=N+1;i++){
        for(int j=2*i;j<=N;j+=i) {
            a[j]=1;
        }
    }
}
int main(){
    int N;
    scanf("%d", &N);
    era(N);
    
    if (N<8){
        printf("-1");
        return 0;
    }

    if (!N%2){
        N-=4;
        printf("2 2 ");
    }
    else{
        N-=5;
        printf("2 3 ");
    }

    for(int i=2;i<N;i++){
        if (!a[i]){
            for(int j=2;j<N;j++){
                if (i+j==N && !a[j]) {
                    printf("%d %d",i,j);
                    return 0;
                }
            }
        }
    }
    return 0;
}
