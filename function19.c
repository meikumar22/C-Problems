#include <stdio.h>

int ans(int n, int m){
    int a = 1;

    for(int i=1; i<=m; i++){
        a = a * n;
    }

    printf("%d", a);

    return 0;
}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);

    ans(n,m);

    return 0;
}
