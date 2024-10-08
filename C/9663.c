#include <stdio.h>
#include <stdlib.h>

int cnt = 0;

int ok(int i, int col[]) {
    int k = 0;
    int flag = 1;
    while (k < i) {
        if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i - k)) {
            return 0;
        }
        k++;
    }
    return 1;
}

void dfs(int i, int n, int col[]) {
    if (ok(i, col)){
        if (i==n-1) {
            cnt++;
        } else {
            for (int j=0;j<n;j++) {
                col[i+1] = j;
                dfs(i+1, n, col);
            }
        }
    }
}

int main() {
    int n;
    int col[16];
    scanf("%d", &n);
    dfs(-1, n, col);

    printf("%d", cnt);
    return 0;
}