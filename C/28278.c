#include <stdio.h>
#define MAX 1000001
int stack[MAX];
int idx = -1;

int push(int item){
    stack[++idx] = item;
}
int pop(){
    if (idx == -1) return -1;
    return stack[idx--];
}
int main(){
    int n, comm, data;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d", &comm);
        switch(comm){
            case 1:
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                printf("%d\n", pop());
                break;
            case 3:
                printf("%d\n", idx+1);
                break;
            case 4:
                if (idx == -1) printf("1\n");
                else printf("0\n");
                break;
            case 5:
                if (idx == -1) printf("-1\n");
                else printf("%d\n", stack[idx]);
        }
    }
    return 0;
}