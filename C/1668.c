#include <stdio.h>

int trophy[50];
int main(){
    int n, tmp, highest=0, sum=0;
    scanf("%d", &n);

    for(int i=0;i<n;i++) scanf("%d", &trophy[i]);
    for(int i=0;i<n;i++) {
        if(trophy[i] > highest) {
            highest = trophy[i];
            sum++;
        }
    }
    printf("%d\n", sum);
    sum=highest=0;

    for(int i=n-1;i>=0;i--) {
        if(trophy[i] > highest) {
            highest = trophy[i];
            sum++;
        }
    }
    printf("%d\n", sum);
    return 0;
}