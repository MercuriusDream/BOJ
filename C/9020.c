#include <stdio.h>

int a[10002] = {0,};
int era(){
    a[0]=a[1]=1;
    for(int i=2;i*i<=10002;i++){
        for(int j=2*i;j<=10002;j+=i){
            a[j] = 1;
        }
    }
}
int main(){
    int T,n,x;
    int left, right;

    era();
    scanf("%d",&T);

    for(int i=0;i<T;i++){
        scanf("%d",&n);
        left=right=x=n/2;

        for(int j=0;j<=x;j++){
            if (!a[left] && !a[right]) break;
            else{
                --left;
                ++right;
            }
        }
        printf("%d %d\n",left,right);
    }
    
    return 0;
}